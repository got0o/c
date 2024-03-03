#include <stdio.h>

int main(void) {
	int a,b;
	puts("二つの整数を入力してください。");
	printf("a:");	scanf("%d",&a);
	printf("b:");	scanf("%d",&b);
	if (a % b == 0) {
		printf("BはAの約数です。");
	} else {
		printf("BはAの約数ではありません。");
	}
	return 0;
}


