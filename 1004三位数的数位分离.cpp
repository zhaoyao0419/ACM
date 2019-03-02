#include<stdio.h>

int main(){
	//1004: 三位数的数位分离
	int num;
	scanf("%d",&num);
	int one,two,three;
	one=num%10;
	two=(num%100-one)/10;
	three=(num%1000-two*10-one)/100;
	printf("%d %d %d\n",one,two,three);
	return 0;
}

//#include<stdio.h>
//int main(){
//	int n,a,b,c;
//	scanf("%d",&n);
//	a = n/100;
//	b = n%100/10;
//	c = n%10;
//	printf("%d %d %d\n",c,b,a);
//	return 0;
//} 
