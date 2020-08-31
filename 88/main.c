#include <stdio.h>
#include <string.h>

int main(void){
	char head[6];
	int number, turn;
	scanf("%s %d",head,&number);
	switch(head[0]){
		case 'W':
			turn = 0;
			break;
		case 'N':
			turn = 1;
			break;
		case 'E':
			turn = 2;
			break;
		case 'S':
			turn = 3;
			break;
	}
	for(int i = 0; i < number; i++){
		int temp;
		scanf("%d",&temp);
		if(!temp) turn--;
		else turn++;
		if(turn < 0) turn = 3;
		else if(turn > 3) turn = 0;
	}
	if(turn == 0) printf("West");
	else if(turn == 2) printf("East");
	else if(turn == 1) printf("North");
	else printf("South");
	printf("\n");
	return 0;
}
