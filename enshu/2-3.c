#include <stdio.h>

int main(void) {
	double a;
	puts("実数を入力してください。");	scanf("%lf", &a);
	printf("あなたは%lfと入力しましたね。", a);
	return 0;	
}
