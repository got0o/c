#include <stdio.h>

int main(void) {
	int no;
	printf("整数:");
	scanf("%d",&no);
	if(no == 0) {
		puts("0");
	}else if(no > 0){
		puts("正");
	}else if(no < 0) {
		puts("負");
	}
	return 0;
}
