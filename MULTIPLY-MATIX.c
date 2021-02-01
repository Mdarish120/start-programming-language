#include<stdio.h>
int main()

{ int r1,r2,c1,c2;
	printf("Enter the row of first matrix");
	scanf("%d",&r1);
	printf("Enter the coloum if first matrix");
	scanf("%d",&c1);
	printf("Enter the row of second matrix");
	scanf("%d",&r2);
	printf("Enter the colum of second matrix");
	scanf("%d",&c2);
	int a[r1][c1],b[r2][c2],c[r1][c2];
	if(c1==r2)
	{
	
	int i,j ,k ,sum=0;
	printf("-------Enter the first matrix element----------\n ");
	for(i=0;i<r1;i++)
	{ for(j=0;j<c1;j++)
	{
		printf("a[%d][%d]" ,i,j);
		scanf("%d",&a[i][j]);
	}
		}
		
		printf("------Enter the second matrix element-----------\n");
		for(i=0;i<r2;i++)
	{ for(j=0;j<c2;j++)
	{
		printf("b[%d][%d]" ,i,j);
		scanf("%d",&b[i][j]);
	}
}
	
for(i=0;i<c1;i++)
{
	for(j=0;j<r2;j++)
	{
		
		
		for(k=0;k<c1;k++)
 {
		
	sum+=a[i][k]*b[k][j];
}

c[i][j]=sum;
sum=0;
}

}
// Result multiply matrix 	
printf("------Result of multiply matrix--------\n");
for(i=0;i<r1;i++)
{ for(j=0;j<c2;j++)
{
	printf("\t\t%d",c[i][j]);
	
}
	printf("\n");
	}
	
}
else
printf("Matrix is not possible");
	
		
}
