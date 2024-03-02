#include<stdio.h>
/* 挿入ソート */

/* このように書くと、配列のサイズが可変でも対応できる！
 *
 * int N = sizeof(A)/sizeof(int); */

int sort(int len,int nums[]){
	for (int i = 1; i < len; i ++) {
	    	for(int n = 0; n < len; n ++) {
			printf("%d ", nums[n]);
		}
		putchar('\n');
		int v = nums[i];
		int j = i - 1;
		while (j >= 0 && nums[j] > v) {
			nums[j+1] = nums[j];
			j --;
		}
		nums[j+1] = v;
	}
	return 0;	
}

int main(void){
	int len = 6;
	int nums[7] = {5, 2, 4, 6, 1, 3};
	sort(len,nums);
	for(int i = 0; i < len; i ++) {
		printf("%d ", nums[i]);
	}
	putchar('\n');
	return 0;
}

