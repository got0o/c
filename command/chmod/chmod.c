#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

/* chmod 755 ファイル名 */


int main(int argc, char* argv[]){
    mode_t mode = (mode_t)strtol(argv[1], NULL, 8);
    for (int i = 2;i<argc;i ++){
        const char* pathname = argv[i];
        printf("%d\n", mode);
        int retChmod = chmod(pathname, mode);
        if(retChmod == -1){
            printf("ファイル名：%s 権限の変更に失敗しました", pathname);
            return -1;
        }
    }    
    return 0;
}

