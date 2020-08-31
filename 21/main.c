#include <stdio.h>

int main(void){
	int number,n[20];
	scanf("%d",&number);
	int i;
	for(i = 0; i < number; i++){
		scanf("%d",&n[i]);
	}
	int max = -1, now = 1;
	for(i = 0; i < number; i++){
		if(n[i] > 0){
			now *= n[i];
			if(now > max) max = now;
		}
	}
	if(max > 0)
		printf("%d\n",max);
	else printf("-1\n");
	return 0;
}
