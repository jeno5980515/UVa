#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int number ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        int amount , amount2 = 0;
        int array1[100000] , array2[100000] ;
        cin >> amount ;
        for ( int n2 = 0 ; n2 < amount ; n2 ++ )
        {
            int input ;
            cin >> input ;
            if ( input < 0 )
            {
                array1[n2] = input * -1 ;
                array2[amount2] = array1[n2] ;
                amount2 ++ ;
            }
            else
                array1[n2] = input ;
        }
        sort(array1,array1+amount) ;
        for ( int i = 0 ; i < amount2 ; i ++ )
        {
            for ( int j = 0 ; j < amount ; j ++ )
            {
                if ( array1[j] == array2[i] )
                {
                    array1[j] *= -1 ;
                    break ;
                }
            }
        }
        int sum = 1 , color = array1[0] ;
        for ( int i = 1 ; i < amount  ; i ++ )
        {
            if ( array1[i] * color < 0 )
            {
                sum ++ ;
                color *= -1 ;
            }
        }
        cout << sum << endl ;

    }
    return 0 ;
}
