#include <stdio.h>
#include <string.h>

int main(void){
	FILE *fp = fopen("DATA5609.DAT","rb");
	char jpeg[12], gif[12], png[12];
	fseek(fp, 6, SEEK_SET);
	fread(jpeg,4,1,fp);
	jpeg[4] = '\0';

	fseek(fp, 0, SEEK_SET);
	fread(gif,6,1,fp);
	gif[6] = '\0';

	fseek(fp, 1, SEEK_SET);
	fread(png,3,1,fp);
	png[3] = '\0';

	if(!strcmp(jpeg,"JFIF")) printf("JPEG\n");
	else if(!strcmp(gif,"GIF89a")) printf("GIF\n");
	else if(!strcmp(png,"PNG")) printf("PNG\n");
	return 0;
}
