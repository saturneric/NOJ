#include <stdio.h>
#define TH(x) ((x)*(x))

int main(void){
	int number,i;
	double avg,temp[33000];
	scanf("%d",&number);
	for(i  = 0 ;i < number; i++){
		scanf("%lf",&temp[i]);
		avg += temp[i];
	}
	avg /= number;
	double s = 0.0;
	for(i = 0; i < number; i++){
		s += TH(temp[i] - avg);
	}
	printf("%.6lf\n",s);
	return 0;
}
