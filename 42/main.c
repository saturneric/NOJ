#include <stdio.h>

int main(void){
	int m,n;
	scanf("%d %d",&m,&n);//m is line.
	int i, all = m * n, line,sum = 0,num,asum = 0;
	for(i = 0; i < all; i++){
		scanf("%d",&num);
		asum += num;
		line = i/n;
		if(!line || line == m-1) sum += num;
		else if(!(i - line*n) || !((i+1) - (line+1)*n)) sum += num; 
	}
	printf("%d\n",asum - (asum - sum)*2);
	return 0;
}
