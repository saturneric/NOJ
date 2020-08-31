#include <stdio.h>
#include <string.h>

int main(void){
	char string[1024];
	int n, loc;
	scanf("%s",string);
	scanf("%d %d",&n,&loc);
	int i;
	for(i = 0; i < n; i++) putchar(string[i]);
	printf("\n");
	int len = (int) strlen(string);
	for(i = len-n; i <= len-1; i++) putchar(string[i]);
	printf("\n");
	for(i = loc; i < loc+n; i++) putchar(string[i]);
	printf("\n");
	return 0;
}
