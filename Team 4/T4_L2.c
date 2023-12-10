#include<stdio.h>

void fib(int n)
{
if(n==1)
{
printf("0");
}
else if(n==2)
{
printf("1");
}
eelse{
return printf(%d",fib(n-1)+fib(n-2));
}
}
void main()
{
int n;
printf("enter number");
scanf("%d",&n);
fib(n);
}

