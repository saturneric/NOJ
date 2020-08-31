#include <stdio.h>

int main(void){
	int a,b,i = 0,k = 1;
	double sum = 0.0, temp = 1.0;
	scanf("%d %d",&a,&b);
	while(sum <= a){
		sum += 1.0/temp;
		temp += 1.0/++k;
	}
	printf("%d ",k-1);
	while(sum < b){
		sum += 1.0/temp;
		temp += 1.0/++k;
	}
	printf("%d\n",k-2);
	return 0;
}
