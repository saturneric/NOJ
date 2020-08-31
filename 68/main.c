#include <stdio.h>

int main(void){
	FILE *fpr = fopen("DATA5612.CPP","r");
	FILE *fpw = fopen("DATA5612.TXT","w");
	char string[1024], count = 1;
	while(fgets(string,1024,fpr) != NULL){
		fprintf(fpw,"%04d %s",count++,string);
	}
	fclose(fpr);
	fclose(fpw);
	return 0;
}
