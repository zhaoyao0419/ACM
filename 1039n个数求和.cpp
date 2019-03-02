#include<stdio.h>
#include<stdlib.h>


int main(){
	//1039: n个数求和
	int total;
	int *num=(int *)malloc(total*sizeof(int));
	int *p;
	int sum=0;
	p=num;
	scanf("%d",&total);
	for(int i=0;i<total;i++){
		scanf("%d",num++);
	}	
	for(int j=0;j<total;j++){
		sum+=*p;
		p++;
	}
	printf("%d\n",sum);
} 


//#include<stdio.h>
// 
//int main()
//{
//    int i, n;
//    int number, sum;
// 
//    scanf("%d", &n);
//    sum = 0;
// 
//    for(i = 1; i <= n; i++) //循环n次，每次读入一个数并累加
//    {
//        scanf("%d", &number);
//        sum += number;
//    }
// 
//    printf("%d\n", sum);
//    return 0;
//
//--------------------- 
//作者：强强强子 
//来源：CSDN 
//原文：https://blog.csdn.net/sinat_25926481/article/details/48053847 
//版权声明：本文为博主原创文章，转载请附上博文链接！
