#include <stdio.h>
#include <string.h>

int main(void){
	char string[1024], ch[2];
	gets(string);
	scanf("%s",ch);
	int len = strlen(string), if_l = 0, if_n = 0;
	int count, max = 0;
	int i;
	for(i = 0; i < len; i++){
		if(string[i] == ch[0]) if_n = 1;
		else if_n = 0;
		if(!if_l && !if_n){
			count = 1;
		}
		if(if_n && if_l) count++;
		if(if_n && !if_l) count = 1;
		if(count > max) max = count;
		if_l = if_n;
	}
	for(i = 0; i < max; i++) printf("%c",ch[0]);
	printf("\n");
	return 0;
}
