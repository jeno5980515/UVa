#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int l , u , array1[10000] , total = 0;
    for ( int i = 1 ; i < 10000 ; i ++)
    {
        array1[total] = i * i ;
        total ++ ;
    }
    for ( ; cin >> l >> u && ( l != 0 && u != 0 ) ;)
    {
        int sum = 0 , site ;
        for ( int i = 0 ; i < total ; i ++)
        {
            if ( array1[i] == l )
            {
                site = i - 1 ;
                break ;
            }
            if ( array1[i] < l && array1[i+1] > l )
            {
                site = i ;
                break ;
            }
        }
        for ( int i = site ; i < total ; i ++ )
        {
            if ( array1[i] <= u && array1[i+1] > u  )
            {
                break ;
            }
            sum ++ ;
        }
        cout << sum << endl ;
    }
    return 0;
}
