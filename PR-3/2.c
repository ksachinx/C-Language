#include<stdio.h>
main(){
	
	int no,i,cout;
	printf("enter any number :- ");
	scanf("%d",&no);
	
	while(no != 0){     //752 !=0             75.2 !=0;         7.52 !=0;
		no= no /10;    //   752/10=75.8;    75.2/10=7.52;     7.52/10=0.752;
		cout++;                  
	}
	printf("%d",cout);

	
	
}
