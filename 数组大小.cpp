 #include<stdio.h>

int main(){
	//数组的大小 
	int a[]={1,2,3,4,5,6,7};
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("%d\t",a[i]);
	} 
	printf("\n");
	int b=sizeof(a);//数组a的大小  27字节 
	printf("%d\n",b);
	printf("%d\n",sizeof(a)/sizeof(a[0]));//数组a中几个单元  27/4=7个单元 
	return 0;
}
