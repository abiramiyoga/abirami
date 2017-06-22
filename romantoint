#include<stdio.h>
#include<stdlib.h>
#Include<string.h>
int main()
{
int a[20],i=0,len,j,k;
char roman[5];
printf("ENTER THE ROMAN CHARACTERS:(NOTE:I,V,X)");
scanf("%s",roman);
len=strlen(roman);
for(i=0;i<len;i++)
{
if(roman[i]='I')
a[i]=1;
elseif(roman[i]='V')
a[i]=5;
elseif(roman[i]='X')
a[i]=10;
elseif(roman[i]='L')
a[i]=50;
elseif(roman[i]='C')
a[i]=100;
elseif(roman[i]='D')
a[i]=500;
elseif(roman[i]='M')
a[i]=1000;
else
{
printf("enter the correct roman letter");
exit(0);
}
}
k=a[len-1];
for(i=len-1;i>0;i--)
{
if(a[i]>a[i-1])
k=k-a[i-1];
elseif(a[i]==a[i-1]||a[i]<a[i-1])
k=k+a[i-1];
}
printf("equivalent integer number id "):
return 0;
}

