#include <stdio.h>

int main(void){
	int number, last;
	int pep[64] = {0}, rlst;
	int cards[20],i;
	scanf("%d %d",&number,&last);
	rlst = number;
	for(i = 0; i < 20; i++) scanf("%d",&cards[i]);
	int count = 0;
	while(count < 20 && rlst > last){
		int k = 0;
		for(i = 1; i <= number; i++){
			if(pep[i] != -1){
				if(!(++k % cards[count])){
					pep[i] = -1;
					if (--rlst <= last) break;
				}
			}
		}
		count++;
	}
	for(i = 1; i <= number; i++)
		if(pep[i] != -1){
			if(i > 1) printf(" ");
			printf("%d",i);
		}
	printf("\n");
	return 0;
}
