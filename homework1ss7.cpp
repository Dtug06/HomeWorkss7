#include<stdio.h> 
int main (){
	 int array [5]={1,2,3,4,5} ;
	 for (int i=0;i<sizeof(array)/sizeof(int);i++){
	 	printf("%d\n",array[i]);
		  
	 }
	 int phantu= sizeof(array)/sizeof(int);
	 printf("so phan tu la %d",phantu) ;
	 
	 return 0; 
} 
