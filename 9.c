#include <stdio.h>

int main(void) {
  for(int c = 1; c <= 1000; c += 1) {
    for(int b = 1; b <= c; b += 1) {
      for(int a = 1; a <= b; a += 1) {
        if((a + b + c) == 1000) {
          if((a*a + b*b) == c*c) {
            printf("%d\n", a*b*c);
            return 0;
          }
        }
      }
    }
  }

  return 0;
}
