#include<stdio.h> 
int main (){
	int n;
	printf("moi nhap do dai cua mang ");
	scanf("%d",&n) ;
	int array[n] ;
	printf("moi nguoi dung nhap cac phan tu cho mang \n"); 
	for (int i=0;i<n;i++){
		printf("phan tu thu %d",i+1) ;
		scanf("%d",&array[i]); 
	} 
	printf("da thiet lap thanh cong"); 
	return 0; 
} 
