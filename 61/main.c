#include <stdio.h>
#include <string.h>

int main(void){
	char string[1024];
	gets(string);
	int len = strlen(string), i;
	for(i = 0; i < len; i++)
		if(string[i] % 2 && i % 2) putchar(string[i]);
	printf("\n");
	return 0;
}
