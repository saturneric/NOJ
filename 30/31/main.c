#include <stdio.h>

int rmb[6] = {100, 50, 10, 5, 2, 1};
int main(void){
	int numbers = 0,ac[100];
	scanf("%d",&numbers);
	int temp, i, all = 0, count;
	for(i = 0; i < numbers; i++) scanf("%d",&ac[i]);
	for(i = 0; i < numbers; i++){
		temp = ac[i];
		for(count = 0; count < 6; count++){
			all += temp / rmb[count];
			temp %= rmb[count];
		}
	}
	printf("%d\n",all);
	return 0;
}

