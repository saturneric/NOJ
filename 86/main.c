#include <stdio.h>

int main(void){
	int number, A[100], B[100], As = 0, Bs = 0;
	scanf("%d",&number);
	int i;
	for(i = 0; i < number; i++) scanf("%d",A+i);
	for(i = 0; i < number; i++) scanf("%d",B+i);
	for(i = 0; i < number; i++){
		if(A[i] > B[i]) As++;
		else if(A[i] < B[i]) Bs++;
	}
	if(As > Bs) printf("A");
	else if(As < Bs) printf("B");
	else printf("=");
	printf("\n");
	return 0;
}
