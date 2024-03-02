#include <stdio.h>

int printStdin(int argc, char* argv[]){
	char line[1000];
	while(fgets(line,sizeof(line),stdin)) {
		printf("%s", line);
	}
	return 0;
}

int printFiles(int argc, char* argv[]){
	char line[1000];
	for(int i=1; i < argc; i ++){
		FILE* file = fopen(argv[i], "r");
		if (file == NULL) {
			printf("file name:%s / can't open file. please check the file exist.", argv[i]);
			return 0;
		}
		while(fgets(line,sizeof(line),file)){
			printf("%s", line);
		}
		fclose(file);
	}
	return 0;
}

int main(int argc, char* argv[]) {
	if (argc < 2) {
		printStdin(argc,argv);
	}else {
		printFiles(argc, argv);
	}
	return 0;
}
