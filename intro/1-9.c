#include <stdio.h>

int main(void) {
	int a;
	int b;
	int c;
	puts("二つの整数を入力してください。");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("それらの和は%dです。", a + b + c);
	return 0;

}
