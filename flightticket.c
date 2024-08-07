//flight booking system 

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 2

struct flight// userdefined datatype 
{

int passno,n;
char name[100];
int dob;
int phno;
};
struct flight e1[MAX];

void read()
{
	//printf("Enter %d employee details :\n",i+1);
	printf("^^^^^^^WELCOME TO EDG AIRLINES^^^^^^^^\n");
	//printf("Enter no of passenger :\n");
	//scanf("%d",&n);
	for(int i=0;i<MAX;i++){
	printf("Enter full name  :");
	getchar();
	scanf("%[^\n]s",e1[i].name);
	printf("Enter date of brith :");
	scanf("%d",&e1[i].dob);
	printf("Enter passport Number:");
	scanf("%d",&e1[i].passno);
	printf("Enter contact no :");
	scanf("%d",&e1[i].phno);
	printf("________________________\n");
	}
}
void display ()
{
	for(int i=0;i<MAX;i++){
	printf("%d.passenger\n",i);
	printf("name :%s \n",e1[i].name);
	printf("DOB: %d \n",e1[i].dob);
	printf("paassport no  :%d \n",e1[i].passno);
	printf("Contact no :%d\n",e1[i].phno);
	}
}
void search(){	
	int a;
	printf("ENTER mobile no :");
	scanf("%d",&a);
	for (int i=0;i<MAX;i++)
		{
			if(e1[i].phno==a)
			{
			printf("name :%s \n",e1[i].name);
			printf("DOB: %d \n",e1[i].dob);
			printf("paassport no  :%d \n",e1[i].passno);
			printf("Contact no :%d\n",e1[i].phno);
			}
			else 
			printf("not found");
		}

		}

void  main ()
{
	read ();
	display ();
	search();
	//printf("total no of bits %d",sizeof(e1));
}

