#include<stdio.h>

double sin(double x);

int main(){
	//1053: ���Һ���
	double x;
	scanf("%lf",&x);
	sin(x);
} 

double sin(double x){
	double num=x;
	double flag=1.0;
	double divide=1.0;
	double sum=0.0;
	double p=0.0;
	for(int i=1;i<=10;i++){
		sum+=flag*num/divide;
		//�´�ѭ���ķ��ӷ�ĸ���ű仯 
		num=num*x*x;
		divide=divide*(2*i)*(2*i+1);
		flag=-flag;
	}
	printf("%.3f",sum);
	return 0;
}


