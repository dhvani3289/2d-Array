#include<stdio.h>
main(){
	
	int i,j,a,b;
	
	printf("Enter row size : ");
	scanf("%d",&a);
	
	printf("Enter column size : ");
	scanf("%d",&b);
	
		int x[a][b];

	
	 for(i=0; i<a; i++){
	 	
	 	for(j=0; j<b; j++){
	 		
	    	printf("Value of[%d][%d] : ",i,j);
	        scanf("%d",&x[i][j]);	
		 }
	printf("\n");
	 }
	 
	  for(i=0; i<a; i++){
	 	
	 	for(j=0; j<b; j++){
	 		
	 		printf("%d ",x[i][j]);
	 	}
	 		printf("\n");
	 }
	
}
