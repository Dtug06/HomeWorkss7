#include<stdio.h> 
int main (){
	int array [5];
	printf("moi nguoi dung bat dau nhap thanh phan cho mang\n");
	for (int i=0;i<5;i++) {
		printf("thanh phan thu %d\n",i);
		scanf("%d",&array[i]); 
	}
	for (int l =0;l<5;l++) {
		printf("%d\n",array[l]); 
	}
	return 0; 
} 
