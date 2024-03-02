#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int Chmod(int argc, char* argv[]){
	if(argc != 3){
		printf("第一引数にMODE,第二引数にファイルを指定してください");
		exit(EXIT_FAILURE);
	}
	/* 権限変更の処理 */
	const char* mode_str = argv[1];
	const char* filename = argv[2];

	mode_t mode = (mode_t)strtol(mode_str, NULL, 8);
	int retChmod = chmod(filename, mode);
	if(retChmod == -1) {
		printf("権限の変更に失敗しました。");
		exit(EXIT_FAILURE);
	}

	return 0;
}
int main(int argc, char* argv[]){
	Chmod(argc, argv);
	return 0;
}	
