#include<stdio.h>

void r(int m,int n);
int l(int n);

int main(){
	//1106: 回文数（函数专题）
	int m,n;
	scanf("%d %d",&m,&n);
	r(m,n);	
}

void r(int m,int n){
	for(int i=m;i<=n;i++){
		long int a[2];
		a[0]=m;
		int len=l(m+1); 
		
	}
	
}

int l(int n){
 int n,len;
 if(n==0)
	len=1;
 else
	len=log10(n)+1;
 return len;
}
