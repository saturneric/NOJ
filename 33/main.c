#include <stdio.h>

int main(void){
	int a,b,number;
	scanf("%d",&number);
	int i;
	for(i = 0; i< number; i++){
		scanf("%d %d",&a,&b);
		a %= 100;
		b %= 100;
		printf("%d\n",(a+b)%100);
	}
	return 0;
}
