#include <iostream>
#include <string>
using namespace std;

int main()
{
    int array1[30] ;
    int array2[15] ;
    for ( int k = 1 ; k < 14 ; k ++ )
    {
        long long int m ;
        for ( long long int n = k ; n < 3000000 ; n ++ )
        {
            for ( int i = 0 ; i < k * 2 ; i ++ )
                array1[i] = i ;
            for ( int i = k * 2 ; i < 30 ; i ++ )
                array1[i] = 0 ;
            bool get = false ;
            long long int site = n %( k * 2 ) - 1 ;
            if ( site == -1 )
                site = k * 2 - 1 ;
            for ( int killamount = 1 ; ; killamount ++)
            {
                if ( array1[site] < k )
                {
                    if ( killamount == k + 1)
                        get = true ;
                    else
                        get = false ;
                    break ;
                }
                for ( long long int j = site ; j < k * 2 - 1 ; j ++ )
                {
                    array1[j] = array1[j+1] ;
                }
                site = site + n %( k*2 - killamount ) - 1 ;
                if ( site >= k*2 - killamount )
                    site -= k*2 - killamount ;
            }
            if ( get == true )
            {
                m = n ;
                break ;
            }
        }
        array2[k] = m ;
    }
    int k ;
    for ( ; cin >> k && k != 0 ; )
    {
        cout << array2[k] << endl ;
    }
    return 0;
}
