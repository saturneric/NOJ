#include <stdio.h>
#include <string.h>

int sort(char *string, int start, int end, int di);

int main(void){
	char string[1024];
	scanf("%s",string);
	int len = strlen(string), f, s;
	if(!(len % 2)) f = len/2 - 1, s = len/2;
	else f = len/2 - 1, s = len/2 + 1;
	sort(string,0,f,0);
	sort(string,s,len-1,1);
	int i;
	for(i = s; i < len; i++) putchar(string[i]);
	if(len%2) putchar(string[f+1]); 
	for(i = 0; i <= f; i++) putchar(string[i]);
	printf("\n");
	return 0;
}

int sort(char *string, int start, int end, int di){
	int i, if_ch = 1, temp;
	while(if_ch){
		if_ch = 0;
		for(i = start; i < end; i++)
			if(string[i] > string[i+1] && di){
				temp = string[i];
				string[i] = string[i+1];
				string[i+1] = temp;
				if_ch = 1;
			}
			else if(string[i] < string[i+1] && !di){
				temp = string[i];
				string[i] = string[i+1];
				string[i+1] = temp;
				if_ch = 1;
			}
	}
	return 0;
}

