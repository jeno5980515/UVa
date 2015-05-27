#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int number ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n++ )
    {
        int sum = 0  , max1 = 0 ;
        long long int l , u , maxn ;
        cin >> l >> u ;
        for ( long long int i = l ; i <= u ; i ++ )
        {
            sum = 0 ;
            bool get = false ;
            for ( long long int j = 1 ; j <= sqrt(i) ; j ++ )
            {
                if ( i % j == 0)
                {
                    sum ++ ;
                    if (  j*j == i )
                    {
                        get = true ;
                        break ;
                    }
                }
            }
            if ( get == false )
                sum *= 2 ;
            else
                sum = sum * 2 - 1 ;
            if ( sum > max1 )
            {
                max1 = sum ;
                maxn = i ;
            }
        }
        cout << "Between " << l << " and " << u << ", " << maxn << " has a maximum of " << max1 << " divisors."<< endl ;
    }
    return 0;
}
