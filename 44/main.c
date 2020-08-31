#include <stdio.h>

int main(void){
	int number, c, tmp = 0, line = 0, count = 0;
	scanf("%d",&number);
	int all = number * number;
	tmp = 0;
	for(c = 0; c < all; c++){
		int num;
		scanf("%d",&num);
		if(count == number){
			tmp = c/number;
			count = 0;
			printf("\n");
		}
		if(count < number){
			if(count) printf(" ");
			if(tmp <= 0){
				printf("%d",num);		
			}
			else{
				printf(" ");
			}
			tmp--;
			count++;
		}
	}
	printf("\n");
	return 0;
}
