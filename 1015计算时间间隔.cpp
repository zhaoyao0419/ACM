#include<stdio.h>

int main(){
	//1015: ����ʱ����
	int h1,m1,s1;//ʱ����;	
	int h2,m2,s2;
	int time=0;
	scanf ("%d:%d:%d",&h1,&m1,&s1);
	
	scanf ("%d:%d:%d",&h2,&m2,&s2);
	
	time=((s2-s1)+(m2-m1)*60+(h2-h1)*3600); 
	
	printf("%d",time);
	
} 
