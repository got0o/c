#include "util.h"

int sumId(int n){
  int sum = 0;
  for(int i=1;i<=n;i++){
    sum += id(i);
  }
  return sum;
}
