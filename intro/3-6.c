#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("a:");	scanf("%d",&a);
	printf("b:");	scanf("%d",&b);
	printf("c:");	scanf("%d",&c);
	if (a>b && a>c) {
		printf("最大値：a");
	}else if(b>a && b>c) {
		printf("最大値：b");
	}else {
		printf("最大値：c");
	}
	return 0;
}
