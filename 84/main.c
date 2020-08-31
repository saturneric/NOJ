#include <stdio.h>

int main(void){
	double rose, fell, exact, tmp;
	scanf("%lf %lf",&rose,&fell);
	exact = rose/fell;
	tmp = exact - (int)(rose/fell);
	printf("%d/1\n",(int)(rose/fell));
	for(int i = 1; i <= fell; i++){
		for(int j = rose / fell; j <= rose; j++){
			double temp = exact - (double)j/i;
			temp = temp>0?temp:-temp;
			if(temp >= 0 && temp < tmp){
				printf("%d/%d\n",j,i);
				tmp = temp;
			}
		}
	}
	return 0;
}
