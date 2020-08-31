#include <stdio.h>

int main(void){
	char string[1024], ch[2];
	int i,count = 0;
	while((ch[0] = getchar()) != '\n') string[count++] = ch[0];
	scanf("%s",ch);
	for(i = 0; i < count; i++)
		if(string[i] != ch[0]) putchar(string[i]);
	printf("\n");
	return 0;
}
