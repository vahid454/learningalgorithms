#include<stdio.h>
int fib(int n);
void fibAll(int n);
void fibAll(int n)
{
    for(int i=0;i<n;i++)
    {
    printf("i : %d",fib(i));
    }
}
int fib(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
fibAll(6);
    return 0;
}
