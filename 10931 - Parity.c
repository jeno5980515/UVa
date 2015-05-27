#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int input , array1[100];
    for ( ; cin >> input && input != 0 ; )
    {
        int sum = 0 , sum2 = 0;
        cout << "The parity of " ;
        for ( int i = input ; i > 0 ; )
        {
            if ( i % 2 == 1 )
                sum ++ ;
            array1[sum2] = i % 2 ;
            sum2 ++ ;
            i /= 2 ;
        }
        for ( int i = sum2 -1 ; i >=0 ; i --)
            cout << array1[i] ;
        cout << " is " << sum << " (mod 2)." << endl ;
    }
    return 0;
}
