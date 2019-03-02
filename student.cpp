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
	printf("输入学生数量：");
	scanf("%d",&number);
	Student aStu[number];
	
	getList(aStu,number);
	save(aStu,number);
}

void getList(Student aStu[],int number){
	char format[STR_LEN];
	sprintf(format,"%%%ds",STR_LEN-1); //效果如%19s
	
	int i;
	for(i=0;i<number;i++){
		printf("第%d个学生：\n",i);
		printf("\t姓名：");
		scanf(format,aStu[i].name);//同("%19s",aStu...) 
		printf("\t性别(0-男，1-女)：");
		scanf("%d",&aStu[i].gender);
		printf("\t年龄：");
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

