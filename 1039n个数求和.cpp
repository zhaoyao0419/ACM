#include<stdio.h>
#include<stdlib.h>


int main(){
	//1039: n�������
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
//    for(i = 1; i <= n; i++) //ѭ��n�Σ�ÿ�ζ���һ�������ۼ�
//    {
//        scanf("%d", &number);
//        sum += number;
//    }
// 
//    printf("%d\n", sum);
//    return 0;
//
//--------------------- 
//���ߣ�ǿǿǿ�� 
//��Դ��CSDN 
//ԭ�ģ�https://blog.csdn.net/sinat_25926481/article/details/48053847 
//��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�
