#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char string[8192], r_string[8192];
	gets(r_string);
	int len = strlen(r_string);
	for(int i = 0; i < len; i++){
		if((r_string[i] >= 'a' && r_string[i] <= 'z') || (r_string[i] >= 'A' && r_string[i] <= 'Z'))
		string[i] = tolower(r_string[i]);
		else string[i] = '#';
	}
	string[len]='\0';
	int tail = len - 1, mtl = tail;
	int i, mi, max = 0, k, mk, tk = 0, ti = 0;
	for(i = 0; i < len; i++){
		k = tail;
		for(k = tail; k > i; k--){
			mk = k;
			mi = i;
			do{
				if(string[mi] != string[mk]) break;
				while(string[++mi] == '#');
				while(string[--mk] == '#');
			}while(mk > mi && string[mi] == string[mk]);
			if(mk <= mi && k - i > max) tk = k, ti = i, max = k - i;
		}
	}
	if(tk - ti >= 0)
		for(i = ti; i <= tk; i++) printf("%c",r_string[i]);
	printf("\n");
	return 0;
}
