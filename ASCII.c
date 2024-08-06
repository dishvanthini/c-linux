#include <stdio.h>
#include<string.h>

int main()
{
  char str[100];
  int noofuppercase=0;
  int nooflowercase=0;
  int noofdigits=0;
  int noofspecchar=0;
  printf("Enter the sentence with some \
  digits and special char \n");
  fgets(str,100,stdin);
  printf("%s",str);
  int i=0;
  while(str[i]!='\0')
  {
      if(str[i]>=65 && str[i]<=90)
      {
          noofuppercase++;
      }
      else if(str[i]>=97 && str[i]<=122)
      {
          nooflowercase++;
      }
      else if(str[i]>=48 && str[i]<=57)
      {
          noofdigits++;
      }
      else
      {
          noofspecchar++;
      }
      i++;
  }
  printf("No of Upper case characers=%d \n",noofuppercase);
  printf("No of Lower case characers=%d \n",nooflowercase);
  printf("No of digits=%d \n",noofdigits);
  printf("No of special characers=%d \n",noofspecchar-1);

}
