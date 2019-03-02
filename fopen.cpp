#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp=fopen("in.txt","r");
	if(fp){
		int in;
		fscanf(fp,"%d",&in);
		if(in==0){
			//内容为空
			printf("内容为空，请录入数据\n");
			scanf("%d",&in);
			FILE *fpw = fopen("in.txt","w");
			fprintf(fpw,"%d",in);
			fscanf(fpw,"%d",&in);		
			fclose(fpw);				
		}
		printf("内容为%d",in);
		fclose(fp);
	}else{
		printf("文件读取失败");
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
//		printf("无法打开文件\n");
//	}
//}

