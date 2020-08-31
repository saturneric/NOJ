#include <stdio.h>

int main(void){
	int number, i;
	scanf("%d",&number);
	printf("%d*%d*%d=%lu=",number,number,number,(unsigned long)number*number*number);
	int k = number * number - number + 1;
	for(i = 0; i < number; i++,k += 2){
		if(i) printf("+");
		printf("%d",k);
	}
	printf("\n");
	return 0;
}
