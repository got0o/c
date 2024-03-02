#include <stdio.h>

int printStdin(){
    char line[1024];
    while (fgets(line,sizeof(line),stdin)){
        printf("%s",line);
    }
    return 0;
}

int printFiles(int argc,char* argv[]){
    FILE* file;
    char line[1024];
    for (int i=1;i<argc;i ++){
        file = fopen(argv[i],"r");
        if(file == NULL){
            printf("ファイル名:%s ファイルが開けません",argv[i]);
            return 1;
        }
        while (fgets(line,sizeof(line),file) != NULL){
            printf("%s",line);
        }
        fclose(file);
    }
    return 0;
}


int main(int argc,char* argv[]){
    if(argc<2){
        printStdin();
    }else{
        printFiles(argc, argv);
    }
    return 0;
}
