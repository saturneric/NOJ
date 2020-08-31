#include <stdio.h>

int main(void){
	int number,n[105],i,s,m;
	scanf("%d",&number);
	for(i = 0; i < number; i++){
		scanf("%d",&n[i]);
	}
	scanf("%d %d",&s,&m);
	int if_change = 1;
	int tmp;
	int end = s+m-1;
	while(if_change){
		if_change = 0;
		
		for(i = s; i < end; i++){
			if(n[i] < n[i+1]){
				tmp = n[i];
				n[i] = n[i+1];
				n[i+1] = tmp;
				if_change = 1;
			}
		}
	}
	for(i = 0; i < number; i++){
		if(i) printf(" ");
		printf("%d",n[i]);
	}
	printf("\n");
	return 0;
}
