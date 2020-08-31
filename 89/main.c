#include <stdio.h>

int main(void){
	double height;
	scanf("%lf",&height);
	double days = height / 5;
	if(days - (int)days > 10e-6) printf("%d",(int)days+1);
	else printf("%d",(int)days-1);
	printf("\n");
	return 0;
}
