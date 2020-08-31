#include <stdio.h>

int main(void){
	int n[105], number, i;
	scanf("%d",&number);
	for(i = 0; i < number; i++) scanf("%d",&n[i]);
	int tgt;
	scanf("%d",&tgt);
	int if_find = -1;
	for(i = 0; i < number; i++)
		if(n[i] == tgt){
			if_find = i;
			break;
		}
	if(!(~if_find)) printf("null\n");
	else printf("%d\n",if_find); 
	return 0;
}
