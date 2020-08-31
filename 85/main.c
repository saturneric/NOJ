#include <stdio.h>

int main(void){
	long long N,count = 0;
	scanf("%lld",&N);
	for(long long i = 1; i < N; i++){
		double j = (double)(N-i)/(i+1);
		if(j - (int)j < 10e-6) count++;
	}
	printf("%lld\n",count/2);
	return 0;
}
