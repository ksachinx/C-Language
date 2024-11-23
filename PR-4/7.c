#include<stdio.h>
main(){
	
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		if(i==1||i==0){
			printf("*****");
		}
		else if(i==2||i==0){
			printf("*   *");
		}
		else if(i==1||i==3){
			printf("*****");
		}
		else{
			printf("*  ");
		}
		
		
		
		printf("\n");
	}
	
	
	
	
}
