#include <stdio.h>
int stack[256], top = 0;
void push(int node);
void pop(void);

int main(void){
	int N[1000], train = 0;
	int number, i;
	scanf("%d",&number);
	for(i = 0; i < number; i++) scanf("%d",&N[i]);
	i = 0;
	int if_ok = 1;
	while(i < number){
		if(train > number){
			if_ok = 0;
			break;
		}
		if(stack[top-1] != N[i]){
			push(++train);
		}
		else pop(),i++;
	}
	if(!if_ok) printf("No\n");
	else printf("Yes\n");
	return 0;
}

void push(int node){
	stack[top++] = node;
}
void pop(void){
	stack[top] = 0;
	top--;
}
