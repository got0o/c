#include <stdio.h>

int sum(int n){
  int sum = 0;
  for(int i=1;i<=n;i++){
    sum += i;
  }
  return sum;
}

int sumSquare(int n){
  int sum = 0;
  for(int i=1;i<=n;i++){
    sum += i * i;
  }
  return sum;
}

int main(void){
  int n = 10;
  printf("n:%d / sum:%d\n", n, sum(n));
  printf("n:%d / sumSquare:%d\n", n, sumSquare(n));
  return 0;
}
