#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

/* 次は-laオプションを適用したい */

void listFiles(char* directory) {
	DIR* dir = opendir(directory);
	if (dir == NULL) {
		printf("ディレクトリが開けません。");
	}
	struct dirent *entry;
	while ((entry = readdir(dir)) != NULL) {
		printf("%s  ", entry->d_name);
	}
} 


int main (int argc, char* argv[]) {
	char* directory;
	if (argc < 2) {
		directory = ".";
	} else {
		directory = argv[1];
	}
	listFiles(directory);
	return 0;
}
