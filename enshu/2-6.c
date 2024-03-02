#include <stdio.h>

int main(void) {
	int a;
	printf("慎重を入力してください:");	scanf("%d", &a);
	printf("標準体重は%4.1fです。", (a-100)*0.9);
	return 0;
}
