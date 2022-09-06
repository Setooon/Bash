#include "s21_grep.h"

int main(int argc, char* argv[]) {
  int res = 0;
  while ((res = getopt(argc, argv, "eivclnhsfo")) != -1) {
    switch (res) {
      case 'e':
        fl.e = 1;
        break;
      case 'i':
        fl.i = 002;
        break;
      case 'v':
        fl.v = 1;
        break;
      case 'c':
        fl.c = 1;
        break;
      case 'l':
        fl.l = 1;
        break;
      case 'n':
        fl.n = 1;
        break;
      case 'h':
        fl.h = 1;
        break;
      case 's':
        fl.s = 1;
        break;
      case 'f':
        fl.f = 1;
        break;
      case 'o':
        fl.o = 1;
        break;
      default:
        fl.stop = 1;
        break;
    }
  }
  fl.flag = fl.e + fl.i + fl.v + fl.c + fl.l + fl.n + fl.h + fl.s + fl.f + fl.o;
  fl.find = argv[optind];
  if (fl.f) {
    FILE* fil = fopen(fl.find, "r");
    while (fgets(fl.find, size_arr, fil)) {
    }
    fclose(fil);
  }
  fl.more_file = ((!(fl.flag) && argc > 3) || argc > 4);
  while (++optind < argc && !fl.stop) {
    output(fl.file = argv[optind]);
    if (fl.c && fl.more_file) {
      printf("%s:%d\n", fl.file, fl.line_counter_c);
    } else if (fl.c && fl.line_counter_c) {
      printf("%d\n", fl.line_counter_c);
    }
    fl.line_counter_c = 0;
    fl.line_counter_n = 0;
  }
  return 0;
}

void output(const char* file) {
  FILE* f;
  static char income[size_arr];
  if ((f = fopen(file, "r")) == NULL && !fl.s) {
    perror(file);
    return;
  }
  while (fgets(income, size_arr, f) != NULL) {
    fl.line_counter_n++;
    regex_t regexx;
    regcomp(&regexx, fl.find, fl.i);
    int res = (regexec(&regexx, income, 0, NULL, 0) == 0);
    if (fl.v) {
      res = !res;
    }
    if (res) {
      fl.line_counter_c++;
      if (fl.l) {
        fl.l = 2;
        regfree(&regexx);
        break;
      }
      if (fl.c) {
        regfree(&regexx);
        continue;
      }
      if (fl.o) {
        char* tmp = income;
        while ((tmp = strstr(tmp, fl.find))) {
          if (!fl.more_file)
            printf("%s\n", fl.find);
          else
            printf("%s:%s\n", fl.file, fl.find);
          tmp++;
        }
        regfree(&regexx);
        continue;
      }
      if (!fl.more_file || fl.h) {
        if (fl.n)
          fprintf(stdout, "%d:%s", fl.line_counter_n, income);
        else
          fprintf(stdout, "%s", income);
      } else {
        if (fl.n) {
          fprintf(stdout, "%s:%d:%s", fl.file, fl.line_counter_n, income);
        } else {
          fprintf(stdout, "%s:%s", fl.file, income);
        }
      }
    }
    regfree(&regexx);
  }
  if (fl.l == 2) {
    printf("%s\n", fl.file);
    fl.l = 1;
  }
  if (ferror(f) && !fl.s) perror(file);
  fclose(f);
}
