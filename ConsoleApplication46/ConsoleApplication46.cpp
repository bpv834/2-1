#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main() {
	char books[5][30] = {"wonder","me before you","the hunger game","twilight","harry poter",};
	int i = 0;

	for (i; i < 5; i++)
		printf("%s\n", books[i]);

	for (i=0; i < 5; i++) {
		if (islower(books[i][0]))
			books[i][0] = toupper(books[i][0]);
	}
	puts("<<변경 후>>");
	for (i=0; i < 5; i++)
		printf("%s\n", books[i]);

}