#include<stdio.h>
	//1060: ��������

int main(){
	int n;
	scanf("%d",&n);
	int pos=0;
	int a[15]={0};
	int p=10,q=1;
	for(int i=0;i<14;i++){
		a[i]=n%p/q;
		p*=10;
		q*=10;
	}
	for(int j=14;j>1;j--){
		if(a[j]!=0){
			pos=j;
			break;
		} 
	}
//	for(int k=0;k<pos+1;k++){
//      //���� 
//		printf("%d ",a[k]);
//	}	
	for(int k=pos;k>=0;k--){
		//˳�� 
		printf("%d ",a[k]);
	}
}
