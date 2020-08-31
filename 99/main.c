#include <stdio.h>

int a[1000005], c[1000005];

int main(void){
	int n;
	while(scanf("%d",&n) != EOF){
		long long sum = 0;
		for(int i = 0; i < n; i++){
			scanf("%d",a+i);
			sum += a[i];
		}
		long long avg = sum / n;
		c[0] = 0;
		for(int i = 1; i < n; i++){
			c[i] = c[i-1] - a[i] + avg;
		}
		
	}
	return 0;
}
