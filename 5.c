#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int isDivisible(int given) {

  for(int i = 2; i <= 20; i += 1) {
    if(given % i != 0) {
      return false;
    }
  }

  return true;
}

int main(void) {
  clock_t begin = clock();

  int i = 20;
  while(!isDivisible(i)) {
    i += 20;
  }

  clock_t end = clock();

  double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;

  printf("%d - executed in %lfs\n", i, time_spent);

  return 0;
}
