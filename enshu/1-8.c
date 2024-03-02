#include <stdio.h>

int main(void) {
	int a;
	int b;
	puts("二つの整数を入力してください。");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("それらの輪は%dです。", a * b);
	return 0;

}
