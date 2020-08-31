#include <stdio.h>
#include <math.h>
#define PF(x) ((x)*(x))

int main(void){
	int number ,i;
	double hs[600];
	scanf("%d",&number);
	for(i = 0; i < number; i++)scanf("%lf",hs+i);
	int if_ch = 1;
	while(if_ch){
		if_ch = 0;
		for(i = 0; i < number-1; i++)
			if(hs[i] < hs[i+1]){
				double temp = hs[i];
				hs[i] = hs[i+1];
				hs[i+1] = temp;
				if_ch = 1;
			}
	}
	i = 0;
	double all = 0.0;
	int count = 0;
	while(all < 20 && i < number){
		all += sqrt(PF(hs[i]) - 1) * 2;
		i++;
		count++;
	}
	printf("%d\n",count);
	return 0;
}
