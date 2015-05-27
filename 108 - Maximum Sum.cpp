#include <cmath>
#include <math.h>
#include <limits.h>
#include <iostream>

using namespace std;

int main()
{
    int array1[101][101] , number , max1 = INT_MIN ;
    while ( cin >> number )
    {
        max1 = INT_MIN ;
        for ( int i = 0 ; i < number ; i ++ )
            for ( int j = 0 ; j < number ; j ++ )
                cin >> array1[i][j] ;
        for ( int i = 0 ; i < number ; i ++ )
        {
            int array2[101] ;
            for ( int m = 0 ; m < number ; m ++ )
                array2[m] = 0 ;
            for ( int j = i ; j < number ; j ++ )
            {
                for ( int k = 0 ; k < number ; k ++ )
                    array2[k] += array1[j][k] ;
                int sum = 0 , max2 = INT_MIN ;
                for ( int k = 0 ; k < number ; k ++ )
                {
                    sum += array2[k] ;
                    if ( sum < 0 )
                        sum = 0 ;
                    if ( max2 < sum )
                        max2 = sum ;
                }
                max1 = max(max1,max2) ;
            }
        }
        cout << max1 << endl   ;
    }
    return 0;
}
