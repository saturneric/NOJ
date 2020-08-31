#include <stdio.h>

int main(void){
	int n;
	while(scanf("%d",&n) && ~n){
		int last = 0, mile = 0;
		for(int i = 0; i < n; i++){
			int now, speed;
			scanf("%d %d",&speed,&now);
			mile += speed * (now-last);
			last = now;
		}
		printf("%d\n",mile);
	}
	return 0;
}
