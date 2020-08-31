#include <stdio.h>

int main(void){
	double x;
	unsigned long long k,y;
	scanf("%llu",&k);
	for(y = k; y < 9999999999999; y++){
		x = k*y/(double)(y-k);
		if(x < y) break;
		if(x - (int)x < 10e-6){
			unsigned long long b,s;
			b = x>y?x:y;
			s = x<y?x:y;
			printf("1/%llu=1/%llu+1/%llu\n",k,b,s);
		}
	}
	return 0;
}
