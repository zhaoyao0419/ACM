#include<stdio.h>

/**
找出key在数组a中的位置
@param key 要寻找的数字
@param a 要寻找的数组
@param length 数组a的长度
@return 如果找到，返回其在a中的位置；如果找不到则返回-1 
*/

int search(int key,int a[],int length);

int main(){
	//搜索数组中的元素下标 
	
	int a[]={1,2,3,6,8,12,9};
	int key;
	int loc;
	scanf("%d",&key);
	loc=search(key,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d元素在第%d个位置\n",key,loc);
	}else{
		printf("%d元素不存在",key);
	}
	return 0;

}


int search(int key,int a[],int length){
	int ret=-1;
	int i;
	for(i=0;i<length;i++){//数组作为参数时 
		if(key==a[i]){	  //此时length不能替换为sizeof(a)/sizeof(a[0})了
			ret=i;
			break;
		}
	}
	return ret;
}
