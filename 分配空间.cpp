#include<stdio.h>
#include<stdlib.h>

int main(){
	//�����ַ
//	void *p;
//	int count=0;
//	while (p=(void*)malloc(1024*1024*100)){
//		count++;
//	}
//	printf("���ѷ�����%d00M",count);
//	return 0;

	int *p;
	p=(int *)malloc(100*1024*1024);
	p++;
	free(p); 
}
