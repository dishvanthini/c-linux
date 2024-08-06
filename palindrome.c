//palindrome
#include<stdio.h>
#include<string.h>
int main (){
char str[50],str1[50];
	printf("enter name ");
	scanf("%s",str);
//string func
	int len=strlen(str);
	len=len-1;
	int j=0;
	while(len>=0)
	{
		str1[j]=str[len];
		//str[0]=str[4]
		j++;
		len--;
	}
	printf("first str :%s \n",str);
	printf("rev str   :%s\n",str1);	

	if (strcmp(str,str1)==0)
		//return 3 value , 1st<2nd -postive , 0 equal ,> negative 
		printf("It is palindrome ");
	else
		printf("It is not palindrome ");
return 0 ;
}

