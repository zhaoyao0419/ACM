#include<stdio.h>
#include<string.h>

char* mycpy(char *str2,char *str1); 

int main(){
	//
	char str1[]="Hello";
	char str2[]="";
	mycpy(str2,str1);
	for(int i=0;i<strlen(str1);i++){
		printf("%c",str2[i]);
	}
	
} 

char* mycpy(char *str2,char *str1){
	while(*str2++==*str1++);
	*str2='\0';
	return str2;
}
