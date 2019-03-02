#include<stdio.h>

int main(){
	//1040: 数列求和1
	int n=0;
	double sum=0;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++){
		sum+=(1.0/(2*i-1));
	}
	printf("%.2f\n",sum);
}
