#include <stdio.h>

int ifdc(int *number);
int ifdb(int *number);
int iffb(int *number);

int main(void){
	int i, number[5];
	for(i = 0; i < 5; i++) scanf("%d",&number[i]);
	if(ifdc(number)){
		int gc = number[1] - number[0] ,tmp = number[4];
		for(i = 0; i < 5; i++) printf("%d ",tmp += gc);
	}
	else if(ifdb(number)){
		int gb = number[1] / number[0], tmp = number[4];
		for(i = 0; i < 5; i++) printf("%d ",tmp *= gb);
	}
	else if(iffb(number)){
		int tmp[7] = {number[3], number[4]};
		for(i = 2; i < 7; i++){
			tmp[i] = tmp[i-1] + tmp[i-2];
			printf("%d ",tmp[i]);
		}
	}
	printf("\n");
	return 0;
}

int ifdc(int *number){
	int i, gc = number[1] - number[0];
	int if_is = 1;
	for(i = 1; i < 4; i++)
		if(number[i+1] - number[i] != gc && if_is) if_is = 0; 
	return if_is;
}

int ifdb(int *number){
	int i;
	double gb = (double)number[1] / number[0];
	if (gb - (int)gb > 10e-6) return 0;
	int if_is = 1;
	for(i = 1; i < 4; i++)
		if(number[i+1] / number[i] != gb && if_is) if_is = 0; 
	return if_is;

}

int iffb(int *number){
	int i, tmp = number[0] + number[1];
	int if_is = 1;
	for(i = 2; i < 5; i++){
		if(number[i] == tmp){
			tmp = number[i] + number[i-1];
		}
		else{
			if_is = 0;
			break;
		}
	}
	return if_is;
}
