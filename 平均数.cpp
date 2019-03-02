#include<stdio.h>

int main(){
	//计算用户输入的数字的平均数 -1退出 
	int a,sum=0,cnt=0;
	double avg=0.0;
	scanf("%d",&a);
while(a!=-1)
	{sum+=a;
	 cnt++;
	 avg=(double)sum/cnt;
	 scanf("%d",&a);
	}
	printf("%2f",avg);
}
