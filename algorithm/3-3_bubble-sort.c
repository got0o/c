#include <stdio.h>

int bubbleSort(int* num_list, int list_length){
  int flag = 1;
  int j;
  int temp;
  while(flag){
    flag = 0;
    for(j = list_length-1; j>=1; j--){
      if (num_list[j] < num_list[j-1]){
	temp = num_list[j];
	num_list[j] = num_list[j-1];
	num_list[j-1] = temp;
	flag = 1;
      }
    }
  }
  for (int i=0;i<list_length;i++){
    printf("%d ",num_list[i]);
  }
  return 0;
}


int main(void){
  int num_list[] = {3, 2, 4, 1};
  printf("%p\n",num_list);
  int list_length = sizeof(num_list) / sizeof(int);
  bubbleSort(num_list, list_length);
  return 0;
}
