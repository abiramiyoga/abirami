#include<stdio.h>
#include<stdlib.h>
int main()
{
int connum;
char namestr[5];
printf("enter your Name:");
scanf("%s",&namestr);
connum=atoi(namestr);
printf("Converted number:");
printf("%d",connum);
return 0;
  }
