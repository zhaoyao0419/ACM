#include<stdio.h>

/**
�ҳ�key������a�е�λ��
@param key ҪѰ�ҵ�����
@param a ҪѰ�ҵ�����
@param length ����a�ĳ���
@return ����ҵ�����������a�е�λ�ã�����Ҳ����򷵻�-1 
*/

int search(int key,int a[],int length);

int main(){
	//���������е�Ԫ���±� 
	
	int a[]={1,2,3,6,8,12,9};
	int key;
	int loc;
	scanf("%d",&key);
	loc=search(key,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%dԪ���ڵ�%d��λ��\n",key,loc);
	}else{
		printf("%dԪ�ز�����",key);
	}
	return 0;

}


int search(int key,int a[],int length){
	int ret=-1;
	int i;
	for(i=0;i<length;i++){//������Ϊ����ʱ 
		if(key==a[i]){	  //��ʱlength�����滻Ϊsizeof(a)/sizeof(a[0})��
			ret=i;
			break;
		}
	}
	return ret;
}
