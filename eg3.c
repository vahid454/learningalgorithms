#include <stdio.h>
#include <stdlib.h>
int fib(int n,int** memo);
void fibAll(int n);
void fibAll(int n)
{
    int* memo;
    memo = (int*)malloc(n * sizeof(int)+1);

    for(int i=0;i<n;i++)
    {
    printf("i : %d\n",fib(i,&memo));
    }
}
int fib(int n,int** memo)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(*memo[n]>0) return *memo[n];
    *memo[n]= fib(n-1,memo)+fib(n-2,memo);
    return *memo[n];
}
int main()
{
fibAll(8);
    return 0;
}
