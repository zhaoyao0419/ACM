#include<stdio.h>
//#include "student.h"

const int STR_LEN = 20;
typedef struct _student{
 	char name[STR_LEN];
 	int gender;
 	int age;
 }Student;

void getList(Student aStu[],int number);
int save(Student aStu[],int number);


int main(){
	int number=0;
	printf("����ѧ��������");
	scanf("%d",&number);
	Student aStu[number];
	
	getList(aStu,number);
	save(aStu,number);
}

void getList(Student aStu[],int number){
	char format[STR_LEN];
	sprintf(format,"%%%ds",STR_LEN-1); //Ч����%19s
	
	int i;
	for(i=0;i<number;i++){
		printf("��%d��ѧ����\n",i);
		printf("\t������");
		scanf(format,aStu[i].name);//ͬ("%19s",aStu...) 
		printf("\t�Ա�(0-�У�1-Ů)��");
		scanf("%d",&aStu[i].gender);
		printf("\t���䣺");
		scanf("%d",&aStu[i].age);
	} 
} 

int save(Student aStu[],int number){
	int ret=-1;
	FILE *fp=fopen("student.data","w");
	if(fp){
		ret = fwrite(aStu, sizeof(Student),number,fp);
		fclose(fp);
	}
	return ret==number;	
}

