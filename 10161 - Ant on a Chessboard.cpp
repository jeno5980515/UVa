#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
    long long int array1[50000] , input;
    for ( int i = 0 ; i < 50000 ; i++)
        array1[i] = i*i ;
    for ( ; cin >> input && input != 0 ; )
    {
        int n = 0 , x = 1 , y = 1 , d = 0 , site = 0 ;
        for( int i = 0 ; i < 50000 ; i++ )
        {
            if ( input > array1[i] && input <= array1[i+1] )
            {
                site = i + 1;
                break ;
            }
        }
        d = array1[site] - input ;
        x = site ;
        if ( site % 2 == 0)
        {
            for ( int i = 0 ; i < site-1 && d > 0 ; i++ , d--)
            {
                y ++ ;
            }
            for ( int i = 0 ; i < site-1 && d > 0 ; i++ , d--)
            {
                x -- ;
            }
        }
        else
        {
            x = 1 , y = site ;
            for ( int i = 0 ; i < site-1 && d > 0 ; i++ , d--)
            {
                x ++ ;
            }
            for ( int i = 0 ; i < site-1 && d > 0 ; i++ , d--)
            {
                y -- ;
            }
        }
        cout << x << " " << y << endl ;
    }
    return 0 ;
}
