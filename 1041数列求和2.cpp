#include<stdio.h>

int main(){
	//1041: 数列求和2
	int n;
	double sum=0.0;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++){
		if(i%2==0){
			//偶数
			sum-=(1.0/(2*i-1));
		}else{
			//奇数
			sum+=(1.0/(2*i-1));			
		} 
	}
	printf("%.2f\n",sum);
	return 0;
} 
