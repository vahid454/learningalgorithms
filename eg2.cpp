#include<stdio.h>
#include<iostream>
#include <vector>
using namespace std;
int fibs(int n);

int fibs(int n)
{
    vector<int> results( n );
    results[ 0 ] = results[ 1 ] = 1;
    for ( int i = 2 ; i < n ; i++ )
        results[ i ] = results[ i - 1 ] + results[ i - 2 ];
    return results[ n - 1 ] + results[ n - 2 ];
}
int main()
{
    printf("fibo(5) : %d\n",fibs(5));   
    return 0;
}
