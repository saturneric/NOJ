#include <stdio.h>

int main(void){
	int number,n[105],i,s,m;
	scanf("%d",&number);
	for(i = 0; i < number; i++){
		scanf("%d",&n[i]);
	}
	scanf("%d %d",&s,&m);
	double avg = 0.0;		
	for(i = s; i <= m; i++){
		avg += n[i];
	}
	avg /= m-s+1;
	printf("%lf\n",avg);
	return 0;
}
