#include<stdio.h>

int main(){
	//1015: 计算时间间隔
	int h1,m1,s1;//时分秒;	
	int h2,m2,s2;
	int time=0;
	scanf ("%d:%d:%d",&h1,&m1,&s1);
	
	scanf ("%d:%d:%d",&h2,&m2,&s2);
	
	time=((s2-s1)+(m2-m1)*60+(h2-h1)*3600); 
	
	printf("%d",time);
	
} 
