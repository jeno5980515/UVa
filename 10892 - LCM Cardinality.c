#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number ;
    int array1[1000] ;
    for ( ; cin >> number && number != 0 ; )
    {
        int amount = 0 , sum = 0 ;
        for ( int i = 1 ; i <= sqrt(number) ; i ++ )
        {
            if ( i == sqrt(number) )
            {
                array1[amount] = i ;
                amount ++ ;
            }
            else if ( number % i == 0 )
            {
                array1[amount] = i , array1[amount+1] = number / i ;
                amount += 2 ;
            }
        }
        for ( int i = 0 ; i < amount ; i ++ )
        {
            for ( int j = i ; j < amount ; j ++ )
            {
                int n1 = array1[i] , n2 = array1[j] ;
                if ( n1 > n2 )
                {
                    int num = n1 ;
                    n1 = n2 ;
                    n2 = num ;
                }
                while ( n1 > 0 )
                {
                    n2 -= ( n2 / n1 ) * n1 ;
                    int num = n2 ;
                    n2 = n1 ;
                    n1 = num ;
                }
                if ( n1 == 0 )
                {
                    if ( array1[i] / n2 * array1[j] == number )
                        sum ++ ;
                }
            }
        }
        cout << number << " " << sum << endl ;
    }
    return 0;
}
