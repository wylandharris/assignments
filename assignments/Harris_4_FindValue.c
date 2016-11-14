#include <stdio.h>

int main () {
	FILE *fp;
	int j;
	int c;
	int secret;
	fp = fopen("text.txt", "r");
	char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	while(1) {
		c = fgetc(fp);
		if(feof(fp)){
			break;
		}
		for (j = 0; j < 256; j++){
			if(j==c){
				secret = j + 10;
				printf("%c", secret);
			}
		}
	printf("\n");
	}
}
