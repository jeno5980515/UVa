#include <iostream>
#include <math.h>
using namespace std;


int gcd(int n , int m)
{
    for ( ; n > 1 ; )
    {
        for ( ; m >= n ; )
        {
            m -= n ;
        }
        int num = n ;
        n = m ;
        m = num ;
    }
    if ( n == 0 )
        return m ;
    else
        return 1 ;
}

int main()
{
    int N ;
    for ( ; cin >> N && N != 0 ; )
    {
        int G=0;
        for(int i=1;i<N;i++)
        for(int j=i+1;j<=N;j++)
        {
            G+=gcd(i,j);
        }
        cout << G << endl ;
    }
    return 0 ;
}
