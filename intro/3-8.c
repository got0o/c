#include <stdio.h>

int main(void) {
	int a,b;
	printf("a:"); scanf("%d",&a);
	printf("b:"); scanf("%d",&b);
	if (a > b) {
		printf("%d:a-b", a-b);
	} else {
		printf("%d:b-a", b-a);
	}
	return 0;
}
