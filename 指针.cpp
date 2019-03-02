#include<stdio.h>

int main(){
	int i=7;
	printf("%p\n",&i);
	printf("%x\n",&i);
	int *p=&i;
	printf("%p\n",p); 
	
}
