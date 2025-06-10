#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(int given) {
  char str[20];
  sprintf(str, "%d", given);

  for(int i = 0; i < strlen(str); i += 1) {
    if(str[i] != str[strlen(str)-(i+1)]) {
      return false;
    }
  }

  return true;
}

int main(void) {

  int greatest_palindrome = -1;

  for(int i = 100; i < 1000; i += 1) {
    for(int j = 100; j < 1000; j += 1) {
      if(isPalindrome(i*j)) {
        if(i*j > greatest_palindrome) {
          greatest_palindrome = i*j;
        }
      }
    }
  }

  printf("%d\n", greatest_palindrome);

  return 0;
}
