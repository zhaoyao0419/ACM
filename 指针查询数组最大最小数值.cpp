#include<stdio.h>

void minmax(int a[],int len,int *max,int *min);

int main(){
	//��ָ���ѯ���������Сֵ
	int a[]={1,9,8,4,12,16,65,3};
	int max;
	int min;
	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);//��ָ���ַ 
	printf("%d\n",max);
	printf("%d",min);
	return 0;
}

void minmax(int a[],int len,int *max,int *min){
	*max=*min=a[0];
	int i;
	for(i=1;i<len;i++){
		if(a[i]<*min){
			*min=a[i];
		}
		if(a[i]>*max){
			*max=a[i];
		}		
	}	
}
