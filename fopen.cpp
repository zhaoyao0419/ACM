#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp=fopen("in.txt","r");
	if(fp){
		int in;
		fscanf(fp,"%d",&in);
		if(in==0){
			//����Ϊ��
			printf("����Ϊ�գ���¼������\n");
			scanf("%d",&in);
			FILE *fpw = fopen("in.txt","w");
			fprintf(fpw,"%d",in);
			fscanf(fpw,"%d",&in);		
			fclose(fpw);				
		}
		printf("����Ϊ%d",in);
		fclose(fp);
	}else{
		printf("�ļ���ȡʧ��");
	}
} 

 

//int main(){
//	FILE *fp;
//	fp = fopen("in.txt","w");
//	if(fp){
//		int num=222;
//		fprintf(fp,"%d",num);
//		fscanf(fp,"%d",&num);
//		printf("%d",num);
//		fclose;
//	}else{
//		printf("�޷����ļ�\n");
//	}
//}

