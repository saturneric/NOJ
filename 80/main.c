#include <stdio.h>

int main(void){
	int number, idx;
	int works[128];
	int i, tmp, head;
	scanf("%d %d",&number,&idx);
	head = 0;
	for(i = 0;i < number; i++) scanf("%d",&works[i]);
	int time = 0;
	do{
		int if_do = 1; 
		for(i = 0; i < number; i++)
			if(works[i] > works[head] && if_do) if_do = 0;
		if(if_do) tmp = head, time++, works[head] = 0;
		if(head == number - 1) head = 0;
		else head++;
	}while(tmp != idx);
	printf("%d\n",time);
	return 0;
}
