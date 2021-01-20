#include<stdio.h>
 int main()
 
 {  
    int a[3][3] , b[3][3] , c[3][3];
    
  int i ,j;
    
    printf("\n-------Enter the A marix----------------\n");
     for(i=0; i<3;i++)
      {
      	 for(j=0; j<3;j++)
           {
           	 printf("Value of matrix a[%d][%d]" , i, j);
           	 scanf("%d" ,&a[i][j]);
           	
					 }      	
 		  }
 	

 	printf("\n-----Enter the value of B marix-------\n");
 	
 	
 	   for(i=0; i<3;i++)
 	     {
 	     	for(j=0; j<3; j++)
 	    
	        {
			  	
 	     	printf("Value of matrix b[%d][%d]" , i, j);
			  scanf("%d" ,&b[i][j]);
		   }
 	     	
		  }
 	
 	       for(i=0 ;i<3;i++)
 	         {
 	         	for(j=0 ;j<3; j++)
 	         	{
 	         		
 	         		c[i][j] = a[i][j] +b[i][j];
				  }
 	         	
 	         	
 	         	
			  }
 	
 	
 	
 	printf("\n ----------The value of A marix------\n-");
 	
 	
 	   for(i=0; i<3;i++)
 	     {
 	     	for(j=0; j<3; j++)
 	    
	        {
			  	
 	     	printf("\t %d" , a[i][j]);
			
		   }
 	     
		    printf("\n");	
		  }
 	
 	
 	printf("\n-----Enter the value of B marix-------\n");
 	
 	
 	   for(i=0; i<3;i++)
 	     {
 	     	for(j=0; j<3; j++)
 	    
	        {
			  	
 	     	printf("\t %d" ,b[i][j]);
			
		   }
 	     	
 	     	printf("\n");
		  }
 	
 	
 	
 	printf("\n-----sum the value of A and B marix-------\n");
 	
 	
 	   for(i=0; i<3;i++)
 	     {
 	     	for(j=0; j<3; j++)
 	    
	        {
			  	
 	     	printf("\t %d" , c[i][j]);
			
		   }
 	     	printf("\n");		  
 	
          }
 	
 	
 }
