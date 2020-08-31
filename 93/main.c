#include <stdio.h>
#include <math.h>
int pm(const long n);

int main(void){
	long a,d,n;
	while(scanf("%ld %ld %ld",&a,&d,&n) == 3 && a+d+n){
		long now = a, count;
		if(!d && !pm(n)){
			printf("-1\n");
			continue;
		}
		if(pm(a) && n == 1){
			printf("%ld\n",a);
			continue;
		}
		for(count = 0; count < n;){
			if(pm(now)) count++;
			if(count >= n){
				printf("%ld\n",now);
				break;
			}
			now += d;
		}
	}
	return 0;
}

int pm(const long n){	
	if(n == 1) return 0;
	else if(n == 2) return 1;
	long temp = n, sqtmp = sqrt(temp);
	int if_pn = 1;
	for(int k = 2; k <= sqtmp; k++){
		if(!(temp%k)){
			if_pn = 0;
			break;
		}
	}
	return if_pn;
}
