#include <stdio.h>
#include <string.h>
#define MAX 1024

int sub(char *a, char *b, int lena, int lenb);
int max(char *a, char *b, int lena, int lenb);

int main(void){
	char stra[MAX], strb[MAX];
	scanf("%s",stra);
	scanf("%s",strb);
	int i, lena = strlen(stra), lenb = strlen(strb);
	int if_zf = 1;
	if(stra[0] == '-') stra[0] = 48, if_zf *= -1;
	if(strb[0] == '-') strb[0] = 48, if_zf *= -1;
	if(!~if_zf) printf("-");
	for(i = 0; i < lena; i++) stra[i] -= 48;
	for(i = 0; i < lenb; i++) strb[i] -= 48;
	int plenb = lenb;
	while(max(stra,strb,lena,plenb) >= 0) strb[plenb++] = 0;
	if(plenb == lenb) printf("0");
	while(plenb > lenb){
		int shang = 0;
		if(max(stra,strb,lena,plenb) <= 0){
			plenb--;
		}
		while(max(stra,strb,lena,plenb) >= 0) sub(stra,strb,lena,plenb), shang++;
		printf("%d",shang);
	}
	printf("\n");
	return 0;
}

int sub(char *a, char *b, int lena, int lenb){
	int i, count = lenb-1;
	for(i = lena-1; i >= lena - lenb; i--, count--) a[i] = a[i] - b[count];
	for(i = lena-1; i >= 0; i--)
		if(a[i] < 0){
			a[i] += 10;
			a[i-1] -= 1;
		}
	return 0;
}

int max(char *a, char *b, int lena, int lenb){
	int i,tlena = lena, tlenb = lenb;
	for(i = 0; a[i] == 0; i++) tlena--;
	for(i = 0; b[i] == 0; i++) tlenb--;
	if(tlena > tlenb) return 1;
	else if(tlena == tlenb){
		int j = lena - tlena, k = lenb - tlenb;
		while(a[j] == b[k] && j < lena && k < lenb) k++,j++;
		if(a[j] > b[k]) return 1;
		else if(a[j] < b[k]) return -1;
	}
	else return -1;
	return 0;
}

