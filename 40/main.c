#include <stdio.h>

int main(void){
	int tmp,i,num[4];
	scanf("%d",&tmp);
	i = 0;
	while(tmp > 0){
		num[i] = tmp % 10;
		tmp /= 10;
		i++;
	}
	tmp = num[3];
	num[3] = num[0];
	num[0] = tmp;
	tmp = num[1];
	num[1] = num[2];
	num[2] = tmp;
	for(i = 3; i >= 0; i--){
		num[i] = (num[i] + 5)%10;
		printf("%d",num[i]);
	}
	printf("\n");
	return 0;
}
