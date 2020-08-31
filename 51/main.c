#include <stdio.h>
#include <string.h>

int main(void){
	char a[8],b[8];
	scanf("%s %s",a,b);
	if(!strcmp(a,"A#")) printf("Bb %s\n",b);
	else if(!strcmp(a,"C#")) printf("Db %s\n",b);
	else if(!strcmp(a,"D#")) printf("Eb %s\n",b);
	else if(!strcmp(a,"F#")) printf("Gb %s\n",b);
	else if(!strcmp(a,"G#")) printf("Ab %s\n",b);
	else if(!strcmp(a,"Bb")) printf("A# %s\n",b);
	else if(!strcmp(a,"Db")) printf("C# %s\n",b);
	else if(!strcmp(a,"Eb")) printf("D# %s\n",b);
	else if(!strcmp(a,"Gb")) printf("F# %s\n",b);
	else if(!strcmp(a,"Ab")) printf("G# %s\n",b);
	else printf("UNIQUE\n");
	return 0;
}
