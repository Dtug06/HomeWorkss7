#include <stdio.h> 
int main (){
	int row,col;
	printf("moi nhap so hang ") ;
	scanf("%d",&row) ;
	printf("moi nhap so cot ");
	scanf("%d",&col); 
	int array[row][col];
	for(int i =0;i<row;i++) {
		for(int j=0;j<col;j++){
			printf("array[%d][%d]",i,j) ;
			scanf("%d",&array[i][j]); 
		} 
	}
	for (int k=0;k<row;k++){
		for(int l=0;l<col;l++){
			printf("%d ",array[k][l]); 
		} 
		printf("\n") ;
	} 
	return 0; 
} 
