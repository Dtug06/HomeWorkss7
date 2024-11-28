#include <stdio.h> 
int main (){
	int n,over,k; 
	printf("moi nhap so phan tu trong mang \n");
	scanf("%d",&n);
	int array[n] ;
	over=1; 
	while (over!=0) {
		for (int i =0;i<n;i++){
			printf("array[%d] la",i+1) ;
			scanf("%d",&k) ;
			if (k%2!=0) {
				array[i]=k ;
			}else 			 
			while(k%2==0) {
			printf("thanh phan khong hop le ,phai la so le\n");	
				scanf("%d",&k) ;
				if (k%2!=0) {
				array[i]=k ;
				
			}			 
		}  		 
	}
	over=0; 
} 
return 0;
}
