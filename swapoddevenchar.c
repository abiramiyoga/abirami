#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j;
char str[15],temp;
printf("Enter the string");
scanf("%s",str);
printf("The given string is %s",str);
for(i=0;i<strlen(str);i=i+2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("after swap string",str);
getch();
}
