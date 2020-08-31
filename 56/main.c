#include <stdio.h>
#include <string.h>

int main(void){
	char (*string[10])[12], (*tmp)[12], buff[10][12];
	int i;
	for(i = 0; i < 10; i++){
		string[i] = &buff[i];
		scanf("%s",*string[i]);
	}
	int if_ch = 1;
	while(if_ch){
		if_ch = 0;
		for(i = 0; i < 9; i++)
			 if(strcmp(*string[i], *string[i+1]) > 0){
				tmp = string[i];
				string[i] = string[i+1];
				string[i+1] = tmp;
				if_ch = 1;
			 }
	}
	for(i = 0; i < 10; i++){
		if(i) printf(" ");
		printf("%s",*string[i]);
	}
	printf("\n");
	return 0;
}
