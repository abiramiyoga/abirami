#include<iostream.c>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i,j=0;
char abi[],temp;
cout<<"enter a any of string ";
gets(abi);
i=0;
j=strlen(abi)-1;
while(i<j)
{
temp=abi[i];
abi[i]=abi[j];
abi[j]=temp;
i++;
j--;
}
cout<<"reverse a string is"<<abi;
getch();
}
