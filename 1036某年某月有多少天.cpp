#include<stdio.h>
 
int main ()
{
	int year, month, days;
 
	scanf("%d %d", &year, &month);
 
	switch(month)
	{
	case 4:
	case 6:
	case 9:
	case 11: days = 30; break;
	case 2:
		if((year%400 == 0)||(year%4 == 0 && year%100 != 0)) //���ʽ̫�������ȼ��ߵ������������Բ����ո񣬱�֤��������
			days = 29;
		else
			days = 28;
		break;
	default: days = 31;
	}
 
	printf("%d\n",days);
	return 0;
}


//#include<stdio.h>
//
//int day(int year,int month);
//
//int main(){
//	//1036: ĳ��ĳ���ж�����
//	int year,month,d;
//	scanf("%d %d",&year,&month);
//	d=day(year,month);
//	printf("%d\n",d);
//	
//}
//
//int day(int year,int month){
//	int day;
//	if(year%4==0 && !year%100==0){
//		switch(month){
//			case 1 :day=31;break;
//			case 2 :day=29;break;
//			case 3 :day=31;break;
//			case 4 :day=30;break;
//			case 5 :day=31;break;
//			case 6 :day=30;break;
//			case 7 :day=31;break;
//			case 8 :day=31;break;
//			case 9 :day=30;break;
//			case 10 :day=31;break;
//			case 11 :day=30;break;
//			case 12 :day=31;break;
//		}
//	}else{
//		switch(month){
//			case 1 :day=31;break;
//			case 2 :day=28;break;
//			case 3 :day=31;break;
//			case 4 :day=30;break;
//			case 5 :day=31;break;
//			case 6 :day=30;break;
//			case 7 :day=31;break;
//			case 8 :day=31;break;
//			case 9 :day=30;break;
//			case 10 :day=31;break;
//			case 11 :day=30;break;
//			case 12 :day=31;break;
//		}
//	}
//	
//	return day;
//	
//}
