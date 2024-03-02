#include <stdio.h>
#include <stdlib.h>

int copy(int argc, char* argv[]){
  if (argc <= 2){
    printf("syntax error");
  }else{
    FILE* source;
    FILE* destination = fopen(argv[argc-1], "wb");
    if (destination == NULL){
      printf("file open error: destination");
    }
    for(int i=1;i<=argc;i++){
      source = fopen(argv[i],"rb");
      if(source == NULL){
	printf("file open error: source");
      }
      fclose(argv[i]);
    }
  }
}

int main(int argc, char* argv[]){
  copy(argc, argv[]);
  return 0;
}
