#include <stdio.h>

int main(void) {
	int a,b,c,d;
	printf("a:");	scanf("%d",&a);
	printf("b:");	scanf("%d",&b);
	printf("c:");	scanf("%d",&c);
	printf("d:");	scanf("%d",&d);
	if (a>b && a>c && a>d) {
		printf("最大値：a");
	}else if (b>a && b>c && b>d) {
		printf("最大値：b");
	}else if (c>a && c>b && c>d) {
		printf("最大値：c");
	}else {
		printf("最大値：d");	
	}



	return 0;
}
