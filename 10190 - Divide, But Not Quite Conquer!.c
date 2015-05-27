#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n , m , array1[100000] , total ;
    for ( int a = 0 ; cin >> n >> m ; a++)
    {
        if ( n < 2 || m < 2 )
        {
            cout << "Boring!" << endl ;
            continue ;
        }
        total = 0 ;
        bool out = false ;
        for ( long long int i = n ; i > 1 ;  )
        {
            if ( i % m != 0)
            {
                out = true ;
                break ;
            }
            else
            {
                i /= m ;
                array1[total] = i ;
                total ++ ;
            }
        }
        if ( out == true )
            cout << "Boring!" << endl;
        else if ( array1[total-1] != 1 )
        {
            cout << "Boring!" << endl;
        }
        else
        {
            cout << n ;
            for ( int i = 0 ; i < total ; i ++)
                cout << " " << array1[i] ;
            cout << endl ;
        }
    }
}
