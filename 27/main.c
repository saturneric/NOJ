#include <stdio.h>
#include <math.h>

int main(void){
	unsigned long long bgn = 1671700,i;
	int num, count = 0;
	scanf("%d",&num);
	while(count < num){
		bgn += 100;
		int aly = 1;
		unsigned long long k, n_bgn = bgn + 99;
		for(i = bgn; i <= n_bgn; i++){
			unsigned long long sqri = sqrt(i) + 1;
			int kaly = 0;
			for(k = 2; k <= sqri; k++){
				if(!(i % k)){
					kaly = 1;
					break;
				}
			}
			if(!kaly){
				aly = 0;
				break;
			}
		}
		if(aly) count++;
	}
	printf("%llu %llu\n",bgn,bgn+99);
	return 0;
}
