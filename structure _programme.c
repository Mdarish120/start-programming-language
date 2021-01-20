#include<stdio.h>
struct students
   {  int marks;
      char  name[10];
      float percentage;
};
int main()	
{
struct students arish, amir, sharique;
arish.marks=90;
amir.marks=87;
sharique.marks=89;
arish.percentage=95.6;
printf("Marks of Arish is %d\n" ,arish.marks);
printf("Marks of Amir is %d\n", amir.marks);
printf("Marks of Sharique is %d\n", sharique.marks);

printf("percentage of Arish is %f \n",arish.percentage);	
	
	
	
}
