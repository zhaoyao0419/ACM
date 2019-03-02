#include<stdio.h>

double sin(double x);

int main(){
	//1053: 正弦函数
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
		//下次循环的分子分母符号变化 
		num=num*x*x;
		divide=divide*(2*i)*(2*i+1);
		flag=-flag;
	}
	printf("%.3f",sum);
	return 0;
}


