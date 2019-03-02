#include<stdio.h>

int main(){
	//数组集成初始化 v1
	int a[10]={0};
	for(int i=0;i<10;i++){
		printf("%d\t",a[i]);
	} 
	return 0;

	//v2 only C99;
//		int a[10]={	[2]=1,2,[5]=1};
//	for(int i=0;i<10;i++){
//		printf("%d\t",a[i]);
//	} 
//	return 0;
}
