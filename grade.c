#include<stdio.h>
#include<ctype.h>
struct student

{	int roll,sub1, sub2, sub3,tot;
	char name[20];
	float avg;
};
typedef struct student
stud ;
stud s1;

void read (){
	printf("enter Roll No \n");
	scanf("%d",&s1.roll);
 	printf("enter Name : \n");
	getchar();
	scanf("%[^\n]s",s1.name);
	printf("enter sub1 :\n");
	scanf("%d",&s1.sub1);
	printf("enter sub2 : \n");
	scanf("%d",&s1.sub2);
	printf("enter sub3 : \n" );
	scanf("%d",&s1.sub3);
}
void display(){

	printf("Roll no\t Name\t sub1\t sub2\t sub3\t total\t avg\n");
	s1.tot=s1.sub1+s1.sub2+s1.sub3;
	s1.avg=(float)s1.tot/3;

	printf("%d\t %s\t %d\t %d\t %d\t %d\t %.2f\n ",s1. roll, s1.name ,s1.sub1, s1.sub2, s1.sub3,s1.tot,s1.avg);
	if (s1.avg>=70)
		printf("grade : FCD \n ");
	if (s1.avg>=60 && s1.avg < 70 )
		printf("grade : FC \n ");
	if (s1.avg>=50 && s1.avg <60 )
		printf("grade : sc \n ");
 	if (s1.avg<50 )
		printf("grade : Fail \n ");
	}
		
void main ()
{
	read ();
	display();
}


