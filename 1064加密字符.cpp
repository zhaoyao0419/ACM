#include<stdio.h>
#include<ctype.h>
 
int main()
{
    char ch;
 
    while( ch = getchar(), ch != '@')
    {
        if(isalpha(ch))
        {
            ch = tolower(ch); //���Ǵ�д��ĸ����ת��ΪСд��ĸ
 
            if(ch == 'z') 
                ch = 'a';
            else
                ch = ch + 1;
        }
 
        putchar(ch);
    }
 
    printf("\n");
    return 0;
}




//#include<stdio.h>
//#include<string.h>
//#define max 10 
//
//
//int main(){
//	//1064: �����ַ�
//	char a[max]={0};
//	scanf("%s",a);
//	int len=strlen(a);
//	
//	if(a[len-1]=='@'){
//		int i,j,k,m; 
//		for(j=0;j<max;j++){
//		//תСд 
//		if(a[j]>='A' && a[j]<='Z'){
//			a[j]=a[j]+'a'-'A';
//		}
//		} 
//	
//		//���� 
//		for(m=0;m<max;m++){
//		if(a[m]=='z'){
//			a[m]='a';
//		}
//		}
//				
//		for(i=0;i<max;i++){
//		if(a[i]>='a' && a[i]<='y'){
//			a[i]=a[i]+1;
//		}
//		}
//
//		
//		//���
//		for(k=0;k<len-1;k++){
//			printf("%c",a[k]);
//			
//		}		
//	}
//	printf("\n");
//	return 0;
//}
