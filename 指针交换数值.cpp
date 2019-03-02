#include<stdio.h>

void swap(int *pa,int *pb);

int main(){
	//利用指针交换ab的值
	int a=4;
	int b=5;
	swap(&a,&b); 
	printf("%d\n",a);
	printf("%d",b);
	return 0;
	
}

void swap(int *pa,int *pb){
	int t=*pa;
	*pa=*pb;
	*pb=t;
	
}
