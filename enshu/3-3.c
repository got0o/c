#include <stdio.h>

int main(void) {
	int a;
	printf("整数：");	scanf("%d",&a);
	if (a < 0)
		a *= -1;
	printf("絶対値は%dです。",a);
	return 0;
}
