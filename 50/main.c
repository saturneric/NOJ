#include <stdio.h>

int main(void){
	int number,i,n[33000],tmp;
	scanf("%d",&number);
	for(i = 0 ;i < number; i++) scanf("%d",&n[i]);
	for(i = 0; i < number; i++){
		scanf("%d",&tmp);
		if(i) printf(" ");
		printf("%d",n[i] + tmp);
	}
	printf("\n");
	return 0;
}
