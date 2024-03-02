#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int listFiles(int argc, char* argv[]){
	DIR* dir;
	struct dirent* entry;
	if (argc == 1){
		dir = opendir(".");
	}else if(argc == 2){
		dir = opendir(argv[1]);
	}else{
		printf("第一引数にディレクトリを指定してください。");
		return 1;
	}
	if (dir == NULL){
		printf("ディレクトリが開けません");
	}
	while((entry =  readdir(dir)) != NULL){
		printf("%s\n", entry->d_name);
	}
	closedir(dir);
	return 0;
}

int main(int argc, char* argv[]){
	listFiles(argc, argv);
	return 0;
}
