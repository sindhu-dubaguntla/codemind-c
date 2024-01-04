#include<stdio.h>
int main()
{
int sum=0,n,i,f,t;
scanf("%d",&n);
i=n%10;
f=n;
while(n>=10)
{
    n=n/10;
}
t=n;
sum=i+n;
printf("%d",sum);
}