#include <stdio.h>
struct info{
	char name[16];
	int solved;
	int ptime;
};

int main(void){
	int n, max = 0, min = -1, idx = 0;
	struct info infos[64];
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		infos[i].solved = 0;
		infos[i].ptime = 0;
		scanf("%s",infos[i].name);
		for(int k = 0; k < 4; k++){
			int s = 0, p = 0;
			scanf("%d %d",&s,&p);
			if(p > 0){
				infos[i].solved++;
				infos[i].ptime += p + 20 * (s-1);
			}
		}
		if(min == -1) min = infos[i].ptime;
		if(infos[i].solved > max) max = infos[i].solved;
		if(infos[i].solved == max && infos[i].ptime < min) min = infos[i].ptime;
		if(infos[i].solved == max && infos[i].ptime == min) idx = i;
	}
	printf("%s %d %d\n",infos[idx].name,infos[idx].solved,infos[idx].ptime);
	return 0;
}
