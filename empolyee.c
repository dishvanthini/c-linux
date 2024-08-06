#include<stdio.h>
#include<ctype.h>
#define MAX 3

struct employee// student userdefined datatype 
{

int id,a;
char name[100];
char dept[100];
int sal;
};
struct employee e1[MAX];



void read()
{
	for(int i=0;i<3;i++)
{
	printf("enter %d employee details :",i);
	printf("enter ID :");
	scanf("%d",&e1[i].id);
	printf("enter name  :");
	scanf("%s",e1[i].name);
	printf("enter dept:");
	scanf("%s",e1[i].dept);
	printf("enter salary:");
	scanf("%d",&e1[i].sal);
}
}



void display ()
{
	for(int i=0;i<3;i++){
	printf("eemployee ID : %d \n",e1[i].id);
	printf("name :%s \n",e1[i].name);
	printf("dept :%s \n",e1[i].dept);
	printf("salary:%d\n",e1[i].sal);
}
}
void search()
{
	printf("enter the empolye id :");
	scanf("%d",&e1.a);
	for (int i=0;i<2;i++)
		if(e1[i]==e1.a){
			printf(" the employee details %d are :", i);
			printf("employee ID : %d \n",e1[i].id);
			printf("name :%s \n",e1[i].name);
			printf("dept :%s\n",e1[i].dept);
			printf("salary:%d\n",e1[i].sal);
			}

		else 
			printf("not found");

}

void  main ()
{
	read ();
	display ();
	search();
	//printf("total no of bits %d",sizeof(e1));
}





