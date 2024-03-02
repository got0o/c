#include <stdio.h>

int main(void) {
	int a,b;
	printf("a:"); scanf("%d", &a);
	printf("b:"); scanf("%d", &b);
	printf("aとbの差は%dです。\n", (a > b) ? a - b : b - a);
	return 0;
}
