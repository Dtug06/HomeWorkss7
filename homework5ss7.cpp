#include<stdio.h> 
int main (){
	 int array [5]={1,2,3,4,5} ;
	 int temp; 
	for (int i=0;i<5;i++){
		temp=array[i]; 
		if (array [i]>array[i+1]){
			array[i]=array[i+1] ;
			array[i] =temp ; 			
		} 
	} 
	printf("so lon nhat trong mang %d\n",array[4]) ;
	printf("so nho nhat %d",array[0]);
	return 0; 
} 
