#include<stdio.h>

int main(){
	//1024: ������ĸ���
	char letter;
	int num;
	scanf("%c",&letter);
	if(letter>='a' && letter<='z'){
		num=letter-'a'+1;
	}
	if(letter>='A' && letter<='Z'){
		num=letter-'A'+1;
	}
	printf("%d\n",num);	
}
