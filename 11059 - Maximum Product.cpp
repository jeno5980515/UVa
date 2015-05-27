#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number , array1[20] ;
    for ( int n2 = 1 ; cin >> number && !cin.eof() ; n2 ++ )
    {
        long long int max1 = 0 , sum = 1 ;
        for ( int n = 0 ; n < number ; n ++ )
        {
            cin >> array1[n] ;
        }
        for ( int i = 0 ; i < number ; i ++ )
        {
            for ( int j = i ; j < number ; j ++ )
            {
                sum *= array1[j] ;
                if ( sum > max1 )
                {
                    max1 = sum ;
                }
            }
            sum = 1 ;
        }
        cout << "Case #" << n2 << ": The maximum product is " << max1 << "." << endl << endl  ;
    }
}
