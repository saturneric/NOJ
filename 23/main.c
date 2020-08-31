#include <stdio.h>
int n[30],number;
long long count = 0;
int tdo(int deep);
int main(void){
	scanf("%d",&number);
	tdo(1);
	printf("%lld\n",count);
	return 0;
}

int tdo(int deep){
	int i,k;
	for(i = 1; i <= 2; i++){
		n[deep] = i;
		if(deep > 2)
			if(n[deep] == 2 && n[deep-1] == 2 && n[deep-2] == 2){
				int max = 1;
				for(k = 0; k < number-deep; k++) max *= 2;
				count += max;
				return 0;
			}
		if(deep < number)
			tdo(deep+1);
	}
	return 0;
}
