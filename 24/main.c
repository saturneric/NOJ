#include <stdio.h>
int n[10] = {0};
unsigned long long count = 0;
int add(int *n);
int main(void){
	unsigned long long i,number;
	scanf("%llu",&number);
	for(i = 0; i < number; i++)
		add(n);	
	printf("%llu\n",count);
	return 0;
}


int add(int *n){
	int i = 0;
	n[0] += 1;
	while(n[i] > 9){
		n[i] %= 10;
		n[++i] += 1;
	}
	for(i = 0; i < 10; i++)
		if(n[i] == 1) count++;
	return 0;
}
