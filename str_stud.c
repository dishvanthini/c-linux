#include<stdio.h>
#include<ctype.h>


struct student // student userdefined datatype 
{

int rollno;
char name[100];
int sem;
float CGPA;
};
struct student s1;



void read()
{
	printf("enter roll no :");
	scanf("%d",&s1.rollno);
	printf("enter name  :");
	scanf("%s",s1.name);
	printf("enter sem:");
	scanf("%d",&s1.sem);
	printf("enter CGPA:");
	scanf("%f",&s1.CGPA);
}



void display ()
{
	
	printf("roll no: %d \n",s1.rollno);
	printf("name :%s \n",s1.name);
	printf("sem :%d \n",s1.sem);
	printf("CGPA:%f\n",s1.CGPA);
}

void  main ()
{
	read ();
	display ();
	printf("total no of bits %d",sizeof(s1));
}






