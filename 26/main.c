#include <stdio.h>

int main(void){
	int i,t;
	scanf("%d",&t);
	unsigned long long t_a,t_b,a = 1, b = 0;
	for(i = 0; i < t; i++){
		t_a = 3 * a;
		t_b = 2 * b;
		a = b;
		b = t_a + t_b;
	}
	printf("%llu %llu\n",a,b);
	return 0;
}
