#include <stdio.h>
#include <string.h>

int main(void){
	int number, i;
	int m_sid, m_score = -1;
	char m_name[12];
	int sid, score;
	char name[12];
	scanf("%d",&number);
	for(i = 0; i < number; i++){
		scanf("%d %s %d",&sid,name,&score);
		if(score > m_score){
			m_sid = sid;
			m_score = score;
			strcpy(m_name,name);
		}
	}
	printf("%d %s %d\n",m_sid,m_name,m_score);
	return 0;
}
