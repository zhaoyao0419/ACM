#include<stdio.h>

int main(){
	//1054: ���ӳ���
	int n,x;
	scanf("%d",&n);
	int remain=1;
	for(int i=n;i>1;i--){
		remain=((remain+1)*2);
	}
	printf("%d",remain);

} 
