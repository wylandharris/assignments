#include <stdio.h>

int main () {
	FILE *fp;
	int a;
	int b = 1;
	int c;
	int secret;
	int shift;
	fp = fopen("text.txt" , "r");
	while (1) {
		c = fgetc(fp);
		if((feof(fp)) && b != 26) {
			printf(" = %d", b);
			b++;
			printf("\n");
			rewind(fp);
		}
		else if (feof(fp) && b == 26){
			printf(" = %d", b);
			puts("\nWhich shift is the right shift?");
			scanf("%d", &shift);
			break;
		}
		else {
			for(a = 0; a < 33; a++){
				if (a == c){
					if (c == 32) {
					secret = c;
					printf("%c", secret);
					}
				}
			}
			for(a = 97; a < 123; a++){
				if (a == c){
					secret = a - b;
					if (secret < 97) {
						secret = secret + 26;
					}
					printf("%c", secret);
				}
			}
			for(a = 65; a < 91; a++){
				if (a == c){
					secret = a - b;
					if (secret < 65) {
						secret = secret + 26;
					}
					printf("%c", secret);
				}
			}
		}
	}
	printf("\n");
}
