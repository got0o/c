#include<stdio.h>

int main() {
	int a,b;
	printf("入力された2つの整数の加算結果を表示します。");
	printf("1つめの整数を入力してください。:");
	scanf("%d", &a);
	printf("1つめの整数を入力してください。:");
	scanf("%d", &b);
	printf("加算結果は%dです。", a + b);
	return 0;
}
