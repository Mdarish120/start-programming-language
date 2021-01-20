#include<stdio.h>
void add(int*,int*,int*);
void multiply(int* ,int*,int*);
void divide(int*, int* ,int*);
int main()
{ int x ,y ,result ,choice;
	printf("1.Addition of number\n");
	printf("2.Multiply of number\n");
	printf("3.Divide of number\n");
	printf("Enter your choice ");
	scanf("%d" ,&choice);
	switch(choice)
	{ 
	   case 1:printf("Enter two number");
	           scanf("%d %d" ,&x ,&y);
	           add(&x,&y ,&result);
	           printf("Result is %d" ,result);
	           break;
	    case 2:printf("Enter two number ");
		        scanf("%d %d" ,&x ,&y);
				multiply(&x ,&y, &result);
				printf("Result is %d", result);
				break;
		case 3: printf("Enter two number ");
		         scanf("%d %d" ,&x,&y);
				 divide(&x ,&y ,&result);
				printf("Result is %d", result);
				break;
	
				       
	}
		
		
		
		
	}
	void add(int *fno,int *sno ,int *r)
	
	{
		*r=*fno+*sno;
		
		
		
	}
	
	void multiply(int *fno, int *sno, int *r)
	{
		
		*r=*fno**sno;
		
		
	}
    
    void divide(int *fno ,int *sno , int *r)
    {
    	
    	*r =*fno/ *sno; 
    	
	}
