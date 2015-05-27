#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int primearray[100000] ;
    for ( int i = 3 , n = 0  ; i < 1000000 ; i += 2 )
    {
        for ( int j = 2 ; j <= sqrt(i) ; j ++ )
        {
            primearray[n] = i ;
            if ( i % j == 0 )
            {
                n -- ;
                break ;
            }
        }
        n ++ ;
    }
    primearray[0] = 3 ;
    int input ;
    for ( ; cin >> input && input != 0 ; )
    {
        int sub , sub2 = -1;
        for ( int i = 0 ; i < 100000 ; i ++ )
        {
            sub = input - primearray[i] ;
            if ( input < primearray[i] )
                break ;
            for ( int j = 0 ; j < 100000 ; j ++ )
            {
                if ( sub == primearray[j] )
                    sub2 = primearray[j] ;
                else if ( sub < primearray[j] )
                    break ;
            }
            if ( sub2 != -1 )
                break ;
        }
        if ( sub2 == -1 )
            cout << "Goldbach's conjecture is wrong." << endl ;
        else
            cout << input << " = " << input - sub << " + " << sub << endl ;

    }
    return 0;
}
