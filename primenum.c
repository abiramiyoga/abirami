#include<stdio.h>
int main()
{
int num1,num2,i,j,flag,temp,count=0;
printf("enter the num1 & num2");
scanf("%d%d",&num1,&num2);
if(num2<2)
{
printf("There is no prime upto %d",num2);
exit(0);
}
printf("enter the prime numbers are:");
temp=num1;
if(num1%2==0)
{
num1++;
}
for(i=num1;i<=num2;i=i+2)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if((i%j)==0)
flag=1;
break;
}
}
if(flag==0)
{
printf("%d\n",i);
count++;
}
}
printf("number of primes between %d & %d=%d\n,temp,num2,count);
}













