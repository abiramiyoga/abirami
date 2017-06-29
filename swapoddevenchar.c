#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,sle;
char str[25],temp;
printf("Enter the string");
scanf("%s",str);
sle=strlen(str);
for(i=0;i<strlen(str);i=i+2)
{
temp=str[i];
str[i+1]=str[i];
str[i+1]=temp;
}
  printf("After swapping :%s:,str);
  if(sle%2!=0)
printf("%c",str[i-1]);
getch();
}
