#include<stdio.h>

int main(){
	//1031: �жϵ��ڵڼ�����
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>0){
		if(y>0){
			printf("1");
		}else{
			printf("4");
			
		}
	}else{
		if(y>0){
			printf("2");
		}else{
			printf("3");
		}
		
	}
}
