#include<stdio.h>
#include<string.h>

char stra[256] = {0}, strb[256]={0};
int deala[256], dealb[256];
unsigned long MAX;

int doAdd(unsigned long MAX , int *deala, int *dealb);

int main(void)
{
    long i, j;
    scanf("%s",stra) ;
    scanf("%s",strb) ;
    unsigned long lena = strlen(stra) ;
    unsigned long lenb = strlen(strb) ;
    if(lena > lenb )
        MAX = lena ;
    MAX = lenb ;
    for(j = 0, i = strlen(stra)- 1; i >= 0; i--)
        deala[j++] = stra[i] - '0';
    for(j = 0 , i = lenb - 1; i >= 0; i--)
        dealb[j++] = strb[i] - '0';
    doAdd (MAX, deala, dealb) ;
    for(i = 100; i >= 0; i--) if(deala[i] != 0) break;
    for(;i>=0;i--) printf("%d" ,deala[i]);
    printf("\n") ;
}
int doAdd(unsigned long MAX, int *deala, int *dealb)
{
    int i;
    for(i = 0; i < MAX; i++)
    {
        deala[i] += dealb[i];
        if(deala[i] > 9)
        {
            deala[i] -= 10;
            deala[i+1]++;
        }
    }
    return 0;
}
