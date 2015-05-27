#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n ;
    for ( ; cin >> n ; )
    {
        int m = 0 , amount = 0 ;
        bool p = false , e = false ;
        for ( int n2 = n ; n2 > 0 ;)
        {
            n2 /= 10 ;
            amount ++ ;
        }
        for ( int n2 = n , i = 0 ; n2 > 0 ; i ++ )
        {
            int lvl = 1 ;
            for ( int j = i ; j < amount - 1 ; j ++ )
                lvl *= 10 ;
            m += ( n2 % 10 ) * lvl ;
            n2 /= 10 ;
        }
        for ( int i = 2 ; i <= sqrt(n) ; i ++ )
        {
            if ( n % i == 0 )
            {
                p = true ;
                break ;
            }
        }
        for ( int i = 2 ; i <= sqrt(m) ; i ++ )
        {
            if ( m % i == 0 )
            {
                e = true ;
                break ;
            }
        }
        if ( n == m && n > 10 && p == false )
            cout << n << " is prime." << endl ;
        else if ( p == false && n < 10 )
            cout << n << " is prime." << endl ;
        else if ( p == true )
            cout << n << " is not prime." << endl ;
        else if ( (p == false && e == false) && n > 10 )
            cout << n << " is emirp." << endl ;
        else if ( (p == false && e == true) )
            cout << n << " is prime." << endl ;

    }

}
