#include <stdio.h>
/*catコマンド簡易版。入力からファイルパスを受け取り、該当ファイルがなければエラー、あれば開いて中身を1行ずつ読み取り出力*/
int main(int argc, char* argv[]){
	if(argc < 2){
		printf("ファイル名を引数に指定してください");
	}else {
		for (int i = 1; i < argc; i ++) {
			FILE* file = fopen(argv[i], "r");
			if (file == NULL) {
				printf("Can't ope file.please check tyhe file exits.");
			}
			char line[1024];
			while (fgets(line, sizeof(line), file) != NULL) {
				printf("%s", line);
			}
			fclose(file);
		}
			
	}
			
	return 0;
}
