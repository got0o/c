#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
/*mkdir()関数を使用しない場合は、システムコールを直接呼び出す必要があるらしい*/


int printError() {
	printf("実行ファイルの第一引数にディレクトリ名を指定してください");
	return 0;
}

int makeDir(int argc, char* argv[]) {
	for (int i=1; i<argc; i++) {
		const char* directory = argv[i];
		int retMakedir = mkdir(directory, 755);
		if (retMakedir == -1){
			printf("%sがすでに存在します\n", directory);
		}
	}
	return 0;
}

int main(int argc,char* argv[]) {
	if (argc >= 2) {
		makeDir(argc, argv);
	}else {
		printError();
	}
	return 0;
}
