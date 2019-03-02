#include<stdio.h>

int main(){
//OOXX游戏

//读入3X3棋盘 输入1代表X 输入0代表O

	const int size=3;
	int i,j;
	int board[size][size];
	int numOfX;
	int numOfO; 
	int result=-1; //-1代表平手 1代表X赢 0代表O赢 
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	
	//检查行
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
	
	//检查列 
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
	
	//检查对角线
	//正对角线 
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
	
	//副对角线
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
