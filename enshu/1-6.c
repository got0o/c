#include <stdio.h>

int main(void) {
	int a;
	printf("整数を入力してください：");
	scanf("%d", &a);
	printf("%dから%dを減じると%dです。", a, 6, a-6);
}
