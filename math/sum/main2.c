#include <stdio.h>
#include "util.h"

int main(void){
  int n = 10;
  printf("n = %d\n",n);
  printf("sumId:%d\n", sumId(n));
  printf("sumSquare:%d\n", sumSquare(n));

  printf("sumf id:%d\n", sumf(n, id));
  printf("sumf square:%d\n", sumf(n, square));

  
  return 0;
}
