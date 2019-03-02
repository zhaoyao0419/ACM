#include<stdio.h>
#include<string.h>

int main(){
	//1037: Àƒ‘Ú‘ÀÀ„
	double s1=0.0,s2=0.0;
	char op;
	scanf("%lf %c %lf",&s1,&op,&s2);
	if(op=='+' ||op=='-' ||op=='*' ||op=='/'){
		switch (op){
			case '+':printf("%.2f",s1+s2);break;
			case '-':printf("%.2f",s1-s2);break;
			case '*':printf("%.2f",s1*s2);break;
			case '/':if(s2<1e-10){
					 printf("Wrong input!");
					 break;}
				   	 printf("%.2f",s1/s2);break;}
	}else{
		printf("Wrong input!");
		}
	return 0;
}
