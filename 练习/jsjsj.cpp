int main(void){
	
	int i,j;
	for(i=0;i<12;i++){		//初始化马踏棋盘的具体值(0代表未被访问，1代表已被访问，-1代表新加的最外面两层) 
		for(j=0;j<12;j++){
			if(i==0 || i==1 || i==10 || i==11 || j==0 || j==1 || j==10 || j==11){
				chessboard[i][j]=-1;
			}
		}
	}
//	Horse(2,2);		//从 (2,2)的位置开始跑，求得马踏棋盘的一组解
//	PrintChess();
	return 0; 
} 


