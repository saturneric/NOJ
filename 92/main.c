#include <stdio.h>
#include <math.h>

int main(void){
	int i, n;
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		double x, y, s;
		scanf("%lf %lf",&x,&y);
		s = 3.1415926 * (x*x + y*y) / 100;
		printf("%d %d\n",i+1,(int)s+1);
	}
	return 0;
}
