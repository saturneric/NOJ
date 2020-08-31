#include <stdio.h>
#include <string.h>

int main(void){
	char string[1024], word[512][16];
	gets(string);
	printf("%s\n",string);
	int i, len = strlen(string);
	int if_l = 0, if_n = 0, count = -1, k = 0;
	for(i = 0; i < len; i++){
		if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
			if_n = 1;
		else if_n = 0;
		if(if_n && !if_l){
			k = 0;
			word[++count][k++] = string[i];
		}
		else if(if_n && if_l) word[count][k++] = string[i];
		else if(!if_n && if_l) if(~count) word[count][k] = '\0';
		if_l = if_n;
	}
	for(i = count; ~i; i--){
		printf("%s",word[i]);
	}
	printf("\n");
	return 0;
}
