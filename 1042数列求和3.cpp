#include<stdio.h>

int main(){
	//1042: �������3
	int n;
	double sum=0.0;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++){
		if(i%2==0){
			//ż��
			sum-=(1.0*i/(2*i-1));
		}else{
			//����
			sum+=(1.0*i/(2*i-1));			
		} 
	}	
	printf("%.3f\n",sum);

}
