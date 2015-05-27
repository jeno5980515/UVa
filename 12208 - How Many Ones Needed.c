#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int input1 , input2 ;
    for ( int n = 0 ; cin >> input1 >> input2 && ( input1 != 0 || input2 != 0 ) ; n ++  )
    {
        long long int sum1 = 0 , sum2 = 0 , sum3 = 0 ;
        for ( long long int i = 2 ; i <= input1 * 2 ; i *= 2 )
        {
            long long int mod = ((input1 + 1 ) % i )  - ( i / 2 ) ;
            if ( mod < 0 )
                mod = 0 ;
            sum1 += ( ( input1 + 1 ) / i ) * ( i / 2 ) + ( mod % ( i / 2 ) );
        }
        for ( long long int i = 2 ; i <= input2 * 2 ; i *= 2 )
        {
            long long int mod = ((input2 + 1 ) % i )  - ( i / 2 ) ;
            if ( mod < 0 )
                mod = 0 ;
            sum2 += ( ( input2 + 1 ) / i ) * ( i / 2 ) + ( mod % ( i / 2 ) );
        }
        for ( long long int i = input1 ; i > 0 ; i /= 2 )
        {
            if ( i % 2 == 1 )
                sum3 ++ ;
        }
        cout << "Case " << n+1 << ": " << sum2 - sum1 + sum3  << endl ;
    }
    return 0 ;
}
