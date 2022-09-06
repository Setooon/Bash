#include "s21_cat.h"

int main(int argc, char* argv[]) {
  int res = 0;
  int index = 0;
  while ((res = getopt_long(argc, argv, "benstTE", options, &index)) != -1) {
    switch (res) {
      case 'b':
        fl.b = 1;
        break;
      case 'E':
      case 'e':
        fl.e = 1;
        break;
      case 'n':
        fl.n = 1;
        break;
      case 's':
        fl.s = 1;
        break;
      case 'T':
      case 't':
        fl.t = 1;
        break;
      default:
        fl.stop = 1;
        printf("usage: cat [-benstuv] [file ...]\n");
        break;
    }
    if (fl.stop) break;
  }
  while (optind < argc && argc > 1 && !fl.stop) output(argv[optind++]);
  return 0;
}

void output(const char* file) {
  FILE* f;
  static char income[size_arr];
  static char outcome[size_arr];
  if ((f = fopen(file, "r")) == NULL) {
    perror(file);
    return;
  }
  while (fgets(income, size_arr, f)) {
    processing(income, outcome);
    if (fputs(outcome, stdout) == EOF) {
      perror("cat");
      break;
    }
    *outcome = '\0';
  }
  if (ferror(f)) perror(file);
  fclose(f);
}

void processing(const char* income, char* outcome) {
  if (fl.s) {
    static int flag = 0;
    if (*income == '\n') {
      if (flag) {
        *outcome = '\0';
      } else {
        *outcome++ = '\n';
        *outcome = '\0';
      }
      flag = 1;
      return;
    } else {
      flag = 0;
    }
  }
  if (fl.n || fl.b) {
    static size_t income_counter = 1;
    if (*income == '\n') {
      if (!fl.b) sprintf(outcome, "%6zu\t", income_counter++);
    } else {
      sprintf(outcome, "%6zu\t", income_counter++);
    }
  }
  if (fl.t) {
    const char* pl;
    char* pfl;
    for (pl = income, pfl = outcome + strlen(outcome); *pl; ++pl) {
      if (*pl == '\t') {
        *pfl++ = '^';
        *pfl++ = 'I';
      } else {
        *pfl++ = *pl;
      }
    }
    *pfl = '\0';
  } else {
    strcat(outcome, income);
  }
  if (fl.e) {
    size_t len = strlen(outcome);
    if (len) --len;
    outcome[len] = '$';
    outcome[len + 1] = '\n';
    outcome[len + 2] = '\0';
  }
}
