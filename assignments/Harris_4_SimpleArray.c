#include <stdio.h>

int main () {
	char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	int a = 0;
	
	for (a = 0; a <26; a++) {
		printf("alpha of a:%c\n", alphabet[a]);
	}
	return 0;
}
