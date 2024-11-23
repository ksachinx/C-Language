#include<stdio.h>
main(){
	
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);	
		}
		for(k=0;k>=i;k--){
			printf(" ");
		}
		for(k=i-1;k<=4;k++){
			printf("    ");
		}
		for(j=i;j>=1;j--)
		{
			
			printf("%d ",j);	
		}
		printf("\n");
	}
	
	
	
	

	
}
