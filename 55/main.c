#include <stdio.h>
#include <string.h>

int main(void){
	char string[1024];
	scanf("%s",string);
	int m, i, len = strlen(string);
	scanf("%d",&m);
	for(i = m; i < len; i++) putchar(string[i]);
	printf("\n");
	return 0;
}
