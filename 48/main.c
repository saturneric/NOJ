#include <stdio.h>

int main(void){
	int n,m,c[33000],b[33000];
	scanf("%d %d",&n,&m);
	int i;
	for(i = 0; i < n; i++) scanf("%d",&c[i]);
	for(i = 0; i < m; i++) scanf("%d",&b[i]);
	int if_change = 1, tmp;
	while(if_change){
		if_change = 0;
		for(i = 0 ; i < n-1; i++){
			if(c[i] > c[i+1]){
				tmp = c[i];
				c[i] = c[i+1];
				c[i+1] = tmp;
				if_change = 1;
			}
		}
	}
	if_change = 1;
	while(if_change){
		if_change = 0;
		for(i = 0 ; i < m-1; i++){
			if(b[i] > b[i+1]){
				tmp = b[i];
				b[i] = b[i+1];
				b[i+1] = tmp;
				if_change = 1;
			}
		}
	}
	int count = n,k,sum = 0;
	for(i = 0; i < m; i++){
		if(!count)  break;
		for(k = 0; k < n; k++){
			if(b[i] >= c[k] && count && c[k] != -1){
				sum += b[i];
				c[k] = -1;
				count--;
				break;
			}
		}
	}
	if(count) printf("NULL\n");
	else printf("%d\n",sum);
	return 0;
}
