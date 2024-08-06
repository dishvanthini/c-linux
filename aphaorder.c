#include<stdio.h>
#include<string.h>
#define MAX 4 

struct name {

char name[15];
};
struct name n[MAX];

void read(){
	for (int i=0;i<MAX;i++){
	printf("enter %d name ",i+1);
	scanf("%s",n[i].name);}
}

void display(){
	for (int i=0;i<MAX;i++){
	printf("%d.name = %s \n",i+1,n[i].name);}
}

void sort()
{
	struct name t ;
	for (int i=0;i<MAX;i++){
		for (int j=i+1;i<MAX;i++){
		if (strcmp(n[i].name,n[j].name)<0)
			{
				t=n[i];
				n[i]=n[j];
				n[j]=t;
			}
		
		}
	}
}

int main (){
	read();
	printf("before sorting the name\n");
	display();

	sort();
	printf("after sorting the name\n");
	display();
	return 0 ;

}

