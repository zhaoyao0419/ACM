#include<stdio.h>

int main(){
	//1058: ��ⲻ��ʽ
	int n;
	scanf("%d",&n);
	double sum=0;//�� 
	int num=1;//��� 
	double plus=1;//����
	
	for(int i=1;;i++){
		for(int j=1;j<2;j++){
			plus*=num;//ÿ������һ�� 
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
