#include <stdio.h>
unsigned long long C(int m,int n);

int main(void){
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%llu\n",C(m,n));
	return 0;
}

unsigned long long C(int m,int n){
	int i,c = 1,tmp;
	for(i = 0; i < n; i++){
		c *= m-i;
	}
	for(i = 0; i < n; i++){
		c /= n-i;
	}
	return c;
}
