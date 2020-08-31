#include <stdio.h>

int main(void){
	int a,b,c,d;
	int sa,sb;
	char ad;
	scanf("%d/%d%c%d/%d",&b,&a,&ad,&d,&c);
	if(ad == '+') sa = b*c + a*d;
	else sa = b*c - a*d;
	sb = a*c;
	int i, min = sa>sb?sb:sa;
	int ys = 0;
	for(i = 1; i <= min; i++){
		if(!(sb % i) && !(sa % i) && ys < i) ys = i;
	}
	printf("%d/%d\n",sa/ys,sb/ys);
	return 0;
}
