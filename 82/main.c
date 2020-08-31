#include <stdio.h>

int main(void){
	int i, j;
	int k = i;
	int max = 0;
	scanf("%d %d",&i,&j);
	for(;k <= j; k++){
		int temp = k, count = 0;
		while(temp != 1){
			if(temp % 2) temp = 3 * temp + 1;
			else temp /= 2;
			count++;
		}
		if(count > max) max = count;
	}
	printf("%d %d %d\n",i,j,max+1);
	return 0;
}
