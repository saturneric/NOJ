#include <stdio.h>

int main(void){
	int value;
	int n,temp,i,k;
	scanf("%d %d",&value,&n);
	for(i = (n>0)?n:-(n); i > 0; i--){
		if(n < 0){
			temp = value & 2147483648;
			value <<= 1;
			if(temp == -2147483648)
				value += 1;
		}
		else if(n > 0){
			temp = value & 1;
			value >>= 1;
			if(temp)
				value += 2147483648;
		}
	}
	printf("%d\n",value);
	return 0;
}
