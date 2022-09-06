#ifndef SRC_GREP_S21_GREP_H_
#define SRC_GREP_S21_GREP_H_

#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size_arr 10000

struct {
  int e, i, v, c, l, n, h, s, f, o;
  char* file;
  char* find;
  int stop;
  int flag;
  int line_counter_c;
  int line_counter_n;
  int more_file;
} fl;

void output(const char*);

#endif  // SRC_GREP_S21_GREP_H_
