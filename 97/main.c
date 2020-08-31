#include <stdio.h>

int main(void){
	int list[32] = {0}, n, idx = 0;
	while(scanf("%d",&n) == 1 && ~n){
		if(n) list[idx++] = n;
		else{
			int count = 0;
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx; j++)
					if(list[j] == 2*list[i]) count++;
			}
			printf("%d\n",count);
			idx = 0;
		}
	}
	return 0;
}
