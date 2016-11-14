#include <stdio.h>
int main () {
	FILE *fp;
	int c;
	int j;
	int shift;
	int secret;
	puts("What would you like your shift to be???");
	scanf("%d",&shift);
	shift = shift - 1;
	fp = fopen("text.txt","r");
	while(1) {
			c = fgetc(fp);
		if(feof(fp)) {
			break;
		}
		for(j = 97; j < 123; j++){
			if (j == c){
				secret = j + shift;
				if (secret > 122) {
					secret = secret % 122 + 96;
				}
				printf("%c", secret);
			}
		}
		for(j = 65; j < 91; j++){
			if (j == c){
				secret = j + shift;
				if (secret > 90) {
					secret = secret % 90 + 64;
				}
				printf("%c", secret);
			}
		}
	}
	printf("\n");
}
