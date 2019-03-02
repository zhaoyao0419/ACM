#include<stdio.h>

int main(){
	//1043: ×î´óÖµ
	int n;
	int num;
	int max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num>max){
			max=num;
		}
	}
	printf("%d\n",max);
	return 0;	
}
