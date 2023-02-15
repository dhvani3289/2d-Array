#include<stdio.h>
main(){
	
	int i,j,a,b,c=0,sum=0,avg;
	
	printf("Enter row size : ");
	scanf("%d",&a);
	
	printf("Enter column size : ");
	scanf("%d",&b);
	
	int x[a][b];
	
	 for(i=0; i<a; i++){
	 	
	 	for(j=0; j<b; j++){
	 		
	    	printf("Value of[%d][%d] : ",i,j);
	        scanf("%d",&x[i][j]);	
	        sum=sum+x[i][j];
	         c++;
		 }
		
         printf("\n");
	 }
	 avg=sum/c;
	 printf("The average of 2D array is : %d",avg);
	
}
