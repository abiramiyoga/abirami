#include<stdio.h>
int main()
{
int n,revnum=0,remain;
printf("Enter the number:");
scanf("%d",revnum);
while(n!=0)
{
remain=n%10;
revnum=revnum*10+remain;
n/=10;
}
printf("reverse number is % d",revnum);
return 0;
}
