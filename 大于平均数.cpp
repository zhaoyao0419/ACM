#include<stdio.h>

int main(){
	//�����û���������ֵ�ƽ���� -1�˳� ���������ƽ�������� 
	//���ڰ�ȫ���� cnt����Խ�� 
	//���ֽ������ 1.�䵽100���Ͳ������� 2.��ʼʱѯ�������������� ��̬����������� 
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
	printf("ƽ����Ϊ%2f\n",avg);
	for(int i=0;i<cnt;i++){
		if(num[i]>avg){
		printf("%d ",num[i]);		
		}
	}
}
