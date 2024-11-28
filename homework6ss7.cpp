#include<stdio.h> 
int main (){
	int array [5] ={1,2,3,4,5};
	for (int l=0;l<5;l++){
		printf("%d\n",array [l]); 
	} 
	for (int i =0;i<5;i++) {
		if (array [i]%2==0){
			array [i]+=2 ;
		} 
		else array[i] +=3; 
	}
	for ( int o =0;o<5;o++){
		printf("%d\n",array[o]); 	
} 
 return 0;
}

