#include <stdio.h>
#define MS 6
long long count = 0;
int sort(int idx, int * planes, int A, int C);
long long cstep(int height);
int main(void){
	int n;
	while(scanf("%d",&n) && n){
		int targets[64]={0}, planes[64]={0};
		count = 0;
		for(int i = 0; i < n; i++) scanf("%d",planes+i);
		for(int i = 0; i < n; i++) scanf("%d",targets+i);
		int idx = 0;
		for(int i = n-1; ~i; i--){
			if(planes[i] != targets[i]){
				idx = i;
				break;
			}
		}
		sort(idx-1,planes,planes[idx-1],MS-planes[idx]-targets[idx]);
		planes[idx] = targets[idx];
		count++;
		if(idx > 0){
			int town_idx = planes[idx-1];
			for(int i = idx-1; ~i; i--){
				if(town_idx != targets[i]){
					count += cstep(i);
					count++;
					town_idx = MS - town_idx - targets[i];
				}
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}

long long cstep(int height){
	int result = 1;
	for(int i = 0; i < height; i++) result *= 2;
	return result-1;
}

int sort(int idx, int * planes, int A,  int C){
	if(idx > 0){
		if(A != C){
			sort(idx-1, planes, planes[idx-1], MS-A-C);
			count++;
			planes[idx] = C;
			sort(idx-1, planes, MS-A-C, C);
		}
		else sort(idx-1, planes, planes[idx-1], C);
	}
	else{
		count++;
		planes[idx] = C;
	}
	return 0;
}
