#include <stdio.h>
#include <string.h>

int main(void){
	char str1[1024], str2[1024];
	gets(str1);
	gets(str2);
	int lena = strlen(str1), lenb = strlen(str2);
	int i;
	long long a = 0, b = 0;
	for(i = 0; i < lena; i++) a += str1[i];
	for(i = 0; i< lenb; i++) b += str2[i];
	printf("%lld",a-b);
	return 0;
}
