#include <stdio.h>
#include <stdlib.h>

int function(int x) {
  if (x <= 0)
      return 0;
  else
  {
      x = x - 2;
      return x;
  }
}

int main() {
  int a = 30, i = 0;

  while (a > 0) {
    a = function(a);
    i++;
  }
  ///Modificare Grapa David printf()
  printf("i = %d", i);
  return 0;
}
