#ifndef SRC_CAT_S21_CAT_H_
#define SRC_CAT_S21_CAT_H_

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size_arr 10000

struct {
  int b, e, n, s, t;
  int stop;
} fl;

void output(const char*);
void processing(const char*, char*);

static struct option options[] = {
    {"number-nonblank", 0, NULL, 'b'}, {"show-ends", 0, NULL, 'e'},
    {"number", 0, NULL, 'n'},          {"squeeze-blank", 0, NULL, 's'},
    {"show-tabs", 0, NULL, 't'},       {NULL, 0, NULL, 0},
};

#endif  // SRC_CAT_S21_CAT_H_
