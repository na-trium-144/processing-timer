#include "ptimer.h"
#include <stdio.h>

int main() {
  long t;
  ptimer(t, ({
    for (int i = 0; i < 10000; i++)
      ;
  }));
  printf("%ld ns\n", t);
}