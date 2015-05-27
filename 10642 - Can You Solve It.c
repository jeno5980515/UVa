#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int number , array1[47] ;
    array1[0] = 0 , array1[1] = 1;
    for ( int i = 2 ; i < 47 ; i ++)
    {
        array1[i] = array1[i-2] + array1[i-1] ;
    }
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        int sum = 0 ;
        int x_begin , y_begin , x_end , y_end ;
        cin >> x_begin >> y_begin >> x_end >> y_end ;
        int n2 = x_begin + y_begin + 1  ;
        int n3 = x_end + y_end + 1 ;
        for ( int i = n2 + 1 ; i < n3 ; i ++ )
        {
            sum += i ;
        }

        if ( n2 == n3 )
        {
            sum += x_end - x_begin  ;
        }
        else
        {
            sum += n2 - x_begin + x_end ;
        }

        cout << "Case " << n+1 << ": " << sum << endl ;

    }

    return 0;
}
