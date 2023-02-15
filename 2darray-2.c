#include<stdio.h>
main(){
	
	int i,j,a,b,c=0;
	int x[a], y[b];
	
	printf("Enter row size : ");
	scanf("%d",&a);
	
	printf("Enter column size : ");
	scanf("%d",&b);
	
	 for(i=0; i<a; i++){
	 	
	 	for(j=0; j<b; j++){
	 		
	    	printf("Value of[%d][%d] : ",i,j);
	        scanf("%d",&x[i],y[j]);	
	         c++;
		 }
		
         printf("\n");
	 }
	 
	 printf("The length of 2D array is : %d",c);
	
}
