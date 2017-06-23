int main()
{
int i,f=1,n;
printf("Enter the Number");
scanf("%d",&n);
if(n<=0)
f=1;
else
{
for(i=1;i<=n;i++)
f=f*i;
}
printf("The factorial of given %d number is:%d",n,f);
return 0;
}


