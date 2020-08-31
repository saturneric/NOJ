#include <stdio.h>
int stack[256];
int main(void){
	int number, i, top = 0, tmp, k;
	scanf("%d",&number);
	for(i = 0; i < number; i++){
		scanf("%d",&tmp);
		int if_in = 0;
		for(k = 0; k < top; k++)
			if(tmp == stack[k]){
				if_in = 1;
				break;
			}
		if(!if_in) stack[top++] = tmp;
		else
			for(k = 0; k < top; k++){
				if(stack[k] == tmp) stack[k] = -1;
			}

	}
	for(i = 0; i < top; i++)
		if(stack[i] != -1){
			if(i) printf(" ");
			printf("%d",stack[i]);
		}
	printf("\n");
	return 0;
}
