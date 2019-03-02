#include<stdio.h>

int main(){
	//1057: ËØÊıÅĞ¶¨ 
	int n;
	int t=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i==0){
		t=1;break;
		} 
	}
	if(t==1||n==1){
		printf("No\n");
	}else
	{
		printf("Yes\n");
	}
}
 
