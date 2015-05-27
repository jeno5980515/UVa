#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int array1[47] , number ;
    array1[0] = 0 , array1[1] = 1 ;
    for ( int i = 2 ; i < 47 ; i ++ )
        array1[i] = array1[i-1] + array1[i-2] ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        int input , site ;
        cin >> input ;
        for ( int i = 2 ; i < 47 ; i ++)
            if ( array1[i] <= input && array1[i+1] > input)
                site = i ;
        cout << input << " = " ;
        for ( int i = site ; i > 1 ; i -- )
        {
            cout << input / array1[i] ;
            input %= array1[i] ;
        }
        cout << " (fib)" << endl ;
    }
    return 0;
}
