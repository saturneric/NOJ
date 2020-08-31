#include <stdio.h>

long f(long n){
	if(!n) return 0;
	else return 1+f(n/2);
}

int main(void){
	long n;
	while(scanf("%ld",&n) && n){
		printf("%ld\n",f(n));
	}
	return 0;
}
