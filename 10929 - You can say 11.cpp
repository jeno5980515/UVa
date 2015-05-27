#include <iostream>
#include <string>
using namespace std;

int main()
{
    int array1[10000] , sum1 , sum2 ;
    string input ;
    for ( ; cin >> input && input != "0"  ; )
    {
        sum1 = 0 , sum2 = 0 ;
        for ( int i = 0 ; i < input.length() ; i ++)
        {
            array1[i] = (int)input[i] -48 ;
        }
        for ( int i = 0 ; i < input.length() ; i++)
        {
            if ( i % 2 == 0 )
                sum1 += array1[i] ;
            else
                sum2 += array1[i] ;
        }
        sum1 -= sum2 ;
        if ( sum1 < 0)
            sum1*= -1 ;
        if ( sum1 == 0 || sum1 % 11 == 0)
            cout << input << " is a multiple of 11." << endl ;
        else
            cout << input << " is not a multiple of 11." << endl ;
    }
    return 0;
}
