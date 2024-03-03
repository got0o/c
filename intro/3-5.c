#include <stdio.h>

int main(void) {
	int n = 51;
	printf("1; n=51:%d / n<100:%d\n", n==51,n<100);
	printf("0; n=52:%d / n<10:%d\n", n==52,n<10);
	return 0;
}
