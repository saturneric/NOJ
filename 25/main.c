#include <stdio.h>

int main(void){
	unsigned long long n,m,i;
	double sum = 0.0;
	scanf("%llu %llu",&n,&m);
	for(i = n; i <= m; i++){
		sum += 1.0/(i*i);
	}
	printf("%.5lf\n",sum);
	return 0;
}
