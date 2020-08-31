#include <stdio.h>
#include <string.h>

int main(void){
	char string[1024], ch;
	int num[256], i = 0;
	while((ch = getchar()) != '\n'){
		string[i++] = ch;
	}
	int len = strlen(string);
	int if_n = 0, count = -1, if_l = 0;
	for(i = 0; i < len; i++){
		if(string[i] > 47 && string[i] < 58) if_n = 1;
		else if_n = 0;
		if(!if_l && if_n){
			//if(~count) num[count] /= 10;
			num[++count] = 0;
			num[count] += string[i] - 48;
		}
		else if(if_l && if_n){
			num[count] *= 10;
			num[count] += string[i] - 48;
		}
		else{

		}
		if_l = if_n;
	}
	printf("%d\n",++count);
	for(i = 0; i < count; i++){
		if(i) printf(" ");
		printf("%d",num[i]);
	}
	return 0;
}
