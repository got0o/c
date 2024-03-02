#include <stdio.h>
int selection_sort(int nums[],int n){
    int temp;
    int trade_time = 0;
    for (int i=0;i<n;i ++){
        int minj = i;
        for (int j=i;j<n;j ++){
            if (nums[j] < nums[minj]){
                minj = j;
            }
        }
        if (i != minj){
            temp = nums[i];
            nums[i] = nums[minj];
            nums[minj] = temp;
            trade_time ++;
        }
    }
    
    return trade_time;
}

int main(void){
    int nums[] = {5, 6, 4, 2, 1, 3};
    int n = sizeof(nums)/sizeof(int);
    int trade_time = selection_sort(nums,n);
    for (int i=0;i<n;i ++){
        printf("%d",nums[i]);
        if (i !=n){
            putchar(' ');
        }
    }
    printf("\n%d\n",trade_time);
    return 0;
}
