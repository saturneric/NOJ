#include <stdio.h>
#include <string.h>

int main(void){
	int lena, lenb, i, k, count, bit = 0 ,zf = 1, aadd = 0, badd = 0;
	char a[128],b[128];
	short tmpc[1024];
	scanf("%s",a);
	scanf("%s",b);
	if(a[0] == '-') zf *= -1, aadd++;
	if(b[0] == '-') zf *= -1, badd++;
	lena = strlen(a);
	for(i = aadd; i < lena; i++) a[i] -= 48;
	lenb = strlen(b);
	for(i = badd; i < lenb; i++) b[i] -= 48;
	for(i = 0; i < 1024; i++) tmpc[i] = 0;
	for(i = lenb-1; i >= badd; i--){
		count = 0;
		for(k = lena-1; k >= aadd; k--){
			tmpc[bit+count++] += a[k] * b[i];
		}
		count = 0;
		for(k = bit; k < 1024; k++){
			tmpc[k+1] += tmpc[k] / 10;
			tmpc[k] %= 10;
		}
		bit++;
	}
	int if_zero = 1;
	if(!~zf) printf("-");
	for(i = 1023; ~i; i--){
		if(tmpc[i] != 0 && if_zero) if_zero = 0;
		if(!if_zero) printf("%d",tmpc[i]);
	}
	printf("\n");
	return 0;
}
