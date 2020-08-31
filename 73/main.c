#include <stdio.h>

int main(void){
	int number, i, n[1024];
	scanf("%d",&number);
	for(i = 0; i < number; i++) scanf("%d",&n[i]);
	int if_ch = 1, tmp, count = 0;
	while(if_ch){
		if_ch = 0;
		for(i = 0; i < number; i++)
			if(n[i] > n[i+1]){
				tmp = n[i];
				n[i] = n[i+1];
				n[i+1] = tmp;
				if_ch = 1, count++;
			}
	}
	printf("%d\n",count);
	return 0;
}
