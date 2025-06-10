#include <stdio.h>

int main(void) {
  int a = 1, b = 2, sum = 0;

  while(b <= 4000000) {

    //if the fibonacci number is even, add it to the sum
    if(b%2 == 0) {
      sum += b;
    }

    //gen next fibonacci number
    int c = a;
    a = b;
    b += c;
  }

  printf("%d\n", sum);

  return 0;
}
