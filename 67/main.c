#include <stdio.h>

int main(void){
	int output[10] = {0},count = 0;
	int input;
	scanf("%d",&input);
	while(input > 0){
		output[count++] = input % 2;
		input /= 2;
	}
	for(input = count-1; input >=0; input--) printf("%d",output[input]);
	printf("\n");
	return 0;
}
