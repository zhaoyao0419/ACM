#include<stdio.h>

int main(){
	//1049: ƽ������������
	int m,n;
	int x=0,y=0;
	scanf("%d %d",&m,&n);
	for(int i=m;i<n+1;i++){
		if(i%2==0){
			//ż��
			x+=i*i; 
		}else{
			//����
			y+=i*i*i; 
		}
	}
	printf("%d %d",x,y);
	
	
}
