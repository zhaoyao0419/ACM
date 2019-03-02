#include"stdio.h"
#include"math.h"
int main()
{
 int n,len;
 scanf("%d",&n);
 if(n==0)
  len=1;
 else
     len=log10(n)+1;
 printf("%d\n",len);
 return 0;
}

//#include<stdio.h>
//
//int main(){
//	//1017: 判断正整数位数
//	int num,a,b,c,d,e;
//	int count=5;
//	scanf("%d",&num);
//	a=num/10000;
//	b=num%10000/1000;
//	c=num%1000/100;
//	d=num%100/10;
//	e=num%10;
//	if(a==0){
//		count--;
//		if(b==0){
//			count--;
//			if(c==0){
//				count--;
//				if(d==0){
//					count--;
//					if(e==0){
//						count--;
//					}
//				}
//			}
//		}
//	}
//	printf("%d",count);
//} 
