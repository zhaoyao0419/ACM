#include<stdio.h>
#include<stdlib.h>

int main(){
	//分配地址
//	void *p;
//	int count=0;
//	while (p=(void*)malloc(1024*1024*100)){
//		count++;
//	}
//	printf("您已分配了%d00M",count);
//	return 0;

	int *p;
	p=(int *)malloc(100*1024*1024);
	p++;
	free(p); 
}
