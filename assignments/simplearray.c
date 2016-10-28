#include <stdio.h>
int main () {
	char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int a = 0;
	int b = 0;
	for(a = 0; a < 26; a++){
		for(b = 0; b < 26; b++){
			printf("alpha of %c: %f\n", alphabet[a], alphabet[a]);
		}
	}
	return 0;
}
