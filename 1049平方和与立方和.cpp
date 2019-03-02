#include<stdio.h>

int main(){
	//1049: 平方和与立方和
	int m,n;
	int x=0,y=0;
	scanf("%d %d",&m,&n);
	for(int i=m;i<n+1;i++){
		if(i%2==0){
			//偶数
			x+=i*i; 
		}else{
			//奇数
			y+=i*i*i; 
		}
	}
	printf("%d %d",x,y);
	
	
}
