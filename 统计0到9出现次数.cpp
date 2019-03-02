#include<stdio.h>
int main(){
	//统计0-9数字出现的次数
	const int number=10;//number常量 
	int num[number];
	int a;
	for(int i=0;i<number;i++){
		num[i]=0;//数组初始化 
	} 
	scanf("%d",&a);
	while(a!=-1){
		if(a>=0 && a<=9){
		num[a]++;	
		}
		scanf("%d",&a);
	} 
	for(int i=0;i<number;i++){
		printf("%d出现%d次\n",i,num[i]);
	}
	return 0;
}
