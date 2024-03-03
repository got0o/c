#include<stdio.h>

int fib(int n) {
	if(n <= 1) {
		return 1;
	}else {
		return fib(n - 1) + fib(n - 2);
	}
}

int main() {
	int n;
	printf("フィボナッチ数列の項数を入力してください\n");	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		printf("%d ",fib(i));
	}
	return 0;
}
