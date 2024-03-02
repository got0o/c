#include <stdio.h>
int selection_sort(int nums[],int n){
    int temp;
    int trade_time = 0;
    for (int i=0;i<n;i ++){
        printf("%d %d",i+1, nums[i]);
        if (i !=n-1){
            putchar(' ');
        }else{
            putchar('\n');
        }
    }
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
            for (int i=0;i<n;i ++){
                printf("%d %d", i+1, nums[i]);
                if (i !=n-1){
                    putchar(' ');
                }else{
                    putchar('\n');
                }
            }
        }
    }
    
    return trade_time;
}

int main(void){
    int nums[] = {5, 6, 4, 2, 1, 3};
    int n = sizeof(nums)/sizeof(int);
    selection_sort(nums,n);
    
    return 0;
}
