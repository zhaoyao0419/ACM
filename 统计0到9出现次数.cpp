#include<stdio.h>
int main(){
	//ͳ��0-9���ֳ��ֵĴ���
	const int number=10;//number���� 
	int num[number];
	int a;
	for(int i=0;i<number;i++){
		num[i]=0;//�����ʼ�� 
	} 
	scanf("%d",&a);
	while(a!=-1){
		if(a>=0 && a<=9){
		num[a]++;	
		}
		scanf("%d",&a);
	} 
	for(int i=0;i<number;i++){
		printf("%d����%d��\n",i,num[i]);
	}
	return 0;
}
