#include <stdio.h>

long n[10] = {1,1}, i;

int DFS(int, long, long);

int main(void){
	long target;
	scanf("%ld",&target);
	for(i = 2; i < 10; i++) n[i] = n[i-1] * i;
	for(i = 9; i > 0; i--){
		if(n[i] < target) break;
	}
	if(DFS(i,0,target)) printf("YES");
	else printf("NO");
	printf("\n");
	return 0;
}

int DFS(int t, long temp, long target){
	if(t > 0){
		long t_tmp = temp + n[t];
		if(t_tmp > target) return 0;
		else if(t_tmp == target) return 1;
		else{
			for(int i = t-1; i > 0; i--){
				if(DFS(i,t_tmp,target)) return 1;
			}
		}
	}
	return 0;
}
