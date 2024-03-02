#include "util.h"

int sumSquare(int n){
  int sum = 0;
  for(int i=1; i<=n;i++){
    sum += i * i;
  }
  return sum;
}
