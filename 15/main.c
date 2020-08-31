#include <stdio.h>

int main(void){
	double a = 0.0;
	int i, count = 0;
	do{	
		a = ++count;
		for(i = 0;i < 5; i++){
			a = (5.0/4.0 * a) + 1;
		}
		
	}while((a - (int)a) > 10e-6);
	printf("%.0lf %d\n",a,count);
	return 0;
}
