#include "util.h"

int sumf(int n, int (*f)(int)){
  int sum = 0;
  for(int i=1;i<=n;i++){
    sum += f(i);
  }
  return sum;
}
