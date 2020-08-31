#include <stdio.h>
int if_has(int i,int m);
int main(void){
	unsigned long long  m,n,i,bgn = 1, aft = 9,sum = 0,g = 0;
	scanf("%llu %llu",&m,&n);
	for(i = 0; i < n-1; i++) bgn *= 10;
	for(i = 0; i < n-1;i++){
		aft *= 10;
		aft += 9;
	}
	printf("%llu %llu\n",bgn ,aft);
	for(i = bgn; i <= aft; i++){
		if(if_has(i,m) && i%m){
			g++;
			sum += i;
		}
	}
	printf("%llu %llu",g,sum);
	return 0;
}

int if_has(int i,int m){
	while(i > 0){
		if(m == i%10) return 1;
		i/=10;
	}
	return 0;
}
