 #include<stdio.h>

int main(){
	//����Ĵ�С 
	int a[]={1,2,3,4,5,6,7};
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("%d\t",a[i]);
	} 
	printf("\n");
	int b=sizeof(a);//����a�Ĵ�С  27�ֽ� 
	printf("%d\n",b);
	printf("%d\n",sizeof(a)/sizeof(a[0]));//����a�м�����Ԫ  27/4=7����Ԫ 
	return 0;
}
