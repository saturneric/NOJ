#include <stdio.h>

int main(void){
	int number;
	char string[1024];
	scanf("%d\n",&number);
	gets(string);
	printf("%s",string);
	return 0;
}
