#include<stdio.h>
#include<ctype.h>

int main(){
	char ch;
	int letter=0,digit=0,other=0;
	while(ch=getchar(),ch!='\n'){

			if(isdigit(ch)){
				digit++;
			}else if(isalpha(ch)){
				letter++;
			}else{
				other++;
			}
		
	}
	printf("letter:%d\n",letter);
	printf("digit:%d\n",digit);
	printf("other:%d\n",other);
	
	
} 
