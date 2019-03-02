#include<stdio.h>

int main(){
	//计算用户输入的数字的平均数 -1退出 并输出大于平均数的数 
	//存在安全隐患 cnt可能越界 
	//两种解决方案 1.输到100个就不能输入 2.开始时询问输入数字数量 动态分配数组个数 
	int a,sum=0,cnt=0;
	double avg=0.0;
	int num[100];
	scanf("%d",&a);
while(a!=-1)
	{num[cnt]=a;
	 sum+=a;
	 cnt++;
	 avg=(double)sum/cnt;
	 scanf("%d",&a);
	}
	printf("平均数为%2f\n",avg);
	for(int i=0;i<cnt;i++){
		if(num[i]>avg){
		printf("%d ",num[i]);		
		}
	}
}
