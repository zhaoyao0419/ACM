#include<stdio.h>

int main(){
	//1062: 最大公约数
	int m,n;
	int p,q;
	scanf("%d %d",&m,&n);
	int a=m,b=n;
	for(int i=0;;i++){
	p=m/n;
	q=m%n;
	if(q==0){
		printf("%d %d",n,(a*b)/n);		
		break;
	}	
	m=n;
	n=q;
	}
}
