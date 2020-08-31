#include <stdio.h>
#include <string.h>

int main(void){
	char str1[1024], str2[1024];
	FILE *fpa = fopen("DATA5613.TXT","r"), *fpb = fopen("DATA5613.CPP","r");
	int count = 1;
	while(fgets(str1,1024,fpa) != NULL && fgets(str2,1024,fpb) != NULL){
		int i, len = strlen(str1);
		for(i = 0; i < len; i++){
			if(str1[i] != str2[i]) printf("%d %d\n",count,i+1);
		}
		count++;
	}
	fclose(fpa);
	fclose(fpb);
	return 0;
}
