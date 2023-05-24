#include<stdio.h>
#include<iostream>
#include <vector>
using namespace std;
int fibs(int n);

/* this approach is very fast approach for finding fibonacci of a number */
int fibs(int n)
{
    vector<int> results( n );
    results[ 0 ] = results[ 1 ] = 1;
    for ( int i = 2 ; i < n ; i++ )
        results[ i ] = results[ i - 1 ] + results[ i - 2 ];
    return results[ n - 1 ] + results[ n - 2 ];
}
/*
in results vector we are storing traced record so that
we don't need to calculate it later
*/
int main()
{
    printf("fibo(5) : %d\n",fibs(5));   
    return 0;
}
