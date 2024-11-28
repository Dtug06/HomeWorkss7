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
	int isPrime=1; 
for (int p=0;p<row;p++){
	for(int q=0;q<col;q++){
		isPrime=1;
		if (array[p][q] < 2) { isPrime = 0; } else {
		for (int m=2;m*m<=array[p][q];m++){
			if (array[p][q]%m==0) {
				isPrime=0;
				break;				
			}
		} 
		if (isPrime){
			printf("%d la 1 so nguyen to\n",array[p][q]); 
		}else 
		printf("%d khong la 1 so nguyen to\n",array[p][q]);
	} 
}
		
} 
return 0;
}
