#include<stdio.h>

int main(){
//OOXX��Ϸ

//����3X3���� ����1����X ����0����O

	const int size=3;
	int i,j;
	int board[size][size];
	int numOfX;
	int numOfO; 
	int result=-1; //-1����ƽ�� 1����XӮ 0����OӮ 
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	
	//�����
	for(i=0;i<size && result==-1;i++){
		numOfX=0;
		numOfO=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				numOfX++;
			}else{
				numOfO++;
			}
		}
		if(numOfX==size){
			result=1;
			break;
		}
		if(numOfO==size){
			result=0;
			break;
		}
	}
	
	//����� 
	for(j=0;j<size && result==-1;j++){
		numOfX=0;
		numOfO=0;
		for(i=0;i<size;i++){
			if(board[i][j]==1){
				numOfX++;
			}else{
				numOfO++;
			}
		}
		if(numOfX==size){
			result=1;
			break;
		}
		if(numOfO==size){
			result=0;
			break;
		}
	}
	
	//���Խ���
	//���Խ��� 
		numOfX=0;
		numOfO=0;
	for(i=0;i<size && result==-1;i++){
		if(board[i][i]==1){
			numOfX++;
		}else{
			numOfO++;
		}
		if(numOfX==size){
			result=1;
		}
		if(numOfO==size){
			result=0;
		}
		
	}
	
	//���Խ���
	numOfO=numOfX=0;
	for(i=0;i<size && result==-1;i++){
		
		if(board[i][size-i-1]==1){
			numOfX++;
		}else{
			numOfO++;
		}
		if(numOfX==size){
			result=1;
		}		
		if(numOfO==size){
			result=0;
		}
	
	} 
	 
 return result;

} 
