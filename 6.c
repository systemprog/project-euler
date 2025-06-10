#include <stdio.h>

int main(void) {

  //compute the sum of squares
  int sum_of_sq = 0;
  for(int i = 1; i <= 100; i += 1) {
    sum_of_sq += i * i;
  }

  //compute the square of sum
  int sum = 0;
  for(int i = 1; i <= 100; i += 1) {
    sum += i;
  }
  int sq_of_sum = sum * sum;

  printf("%d\n", sq_of_sum - sum_of_sq);

  return 0;
}
