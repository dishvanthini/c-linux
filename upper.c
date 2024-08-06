#include<stdio.h>
int main ()
{

	char s[100];
	printf("enter :");
	fgets(s,100,stdin);
int i=0;
while(s[i]!='\0')
	{

	char ch=s[i];
	if (i==0 && s[i]>90)
		s[i]=ch-32;
	if( s[i]==' '){
		ch=s[i+1];
		ch=s[i+1]=ch-32;
	}
	i++;
	
	}
printf("after conversion %s",s);
return 0 ;
}


