#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100][100],atm[100];
    int i,k,temp;
	int count = 0;
    scanf("%d",&temp);
    for(i=0;i<temp;i++) scanf("%s",string[i]);
    for(i=0;i<temp-1;i++)
        for(k=0;k<temp-1-i;k++)
            if(strlen(string[i])>strlen(string[i+1])) strcpy(atm,string[i]),strcpy(string[i],string[i+1]),strcpy(string[i+1],atm);
    if((!temp%2)){
		if(count++)printf(" ");
        for(i=0;i<temp-1;i=i+2){
			if(i) printf(" ");
			printf("%s",string[i]);
		}
        printf(" %s",string[temp-1]);
        for(i=i-3;i>0;i=i-2){
			if(i) printf(" ");
			printf("%s",string[i]);
		}
    }
    else{
		if(count++) printf(" ");
        for(i=0;i<temp-1;i=i+2){
			if(i) printf(" ");
			printf("%s",string[i]);
		}
        printf(" %s",string[temp-1]);
        for(i=i-1;i>0;i=i-2){
			if(i) printf(" ");
			printf("%s",string[i]);
		}
    }
    return 0;
}
