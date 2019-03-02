#include<ctype.h>
#include<stdio.h>

int main(){
	char ch;
	int count=0;
	while(ch=getchar(),ch!='\n'){
		if(isdigit(ch)){
			count++;
		}
	}
	printf("%d\n",count);	
	return 0;
}
