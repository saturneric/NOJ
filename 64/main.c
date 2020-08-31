#include <stdio.h>
#include <string.h>

int main(void){
	char string[1024];
	gets(string);
	int len = strlen(string), i;
	for(i = 0; i < len; i++){
		if(string[i] >= 'a' && string[i] <= 'z') printf("%c",string[i]-3);
		else if(string[i] >= 'A' && string[i] <= 'Z') printf("%c",string[i]+3);
		else printf("%c",string[i]);
	}
	printf("\n");
	return 0;
}
