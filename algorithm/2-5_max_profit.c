#include <stdio.h>

int main(void) {
	int O = 0;
	int nums[7] = {6,5,3,1,3,4,3};
	int minv = nums[0];
	O += 1;
	int maxv = -10000;
	for (int j=1; j<7; j++) {
		O ++;
		/* printf("maxv:%d / minv:%d\n",maxv, minv); */
		maxv = (maxv > nums[j] - minv) ? maxv : nums[j] - minv;
		minv = (minv < nums[j]) ? minv : nums[j];
	}
	printf("maxv:%d / O:%d", maxv, O);	
	return 0;
}

