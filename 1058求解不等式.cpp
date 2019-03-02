#include<stdio.h>

int main(){
	//1058: 求解不等式
	int n;
	scanf("%d",&n);
	double sum=0;//和 
	int num=1;//序号 
	double plus=1;//加数
	
	for(int i=1;;i++){
		for(int j=1;j<2;j++){
			plus*=num;//每次上升一阶 
		}
		sum+=plus;
		if(sum>=n){
			break;
		}
		num++;
//		printf("%d ",num);
//		printf("%f \n",sum);
	} 

	printf("m<=%d",num-1);
}
