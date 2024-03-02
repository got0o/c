#include <stdio.h>

int main(void) {
	int a, b;
	puts("ふたつの整数を入力してください。");
	printf("A："); scanf("%d", &a);	
	printf("B："); scanf("%d", &b);	
	if (a>b) {
		printf("AはBより大きいです。");
	} else {
		printf("BはAより大きいです。");
	} 
	return 0;
}
