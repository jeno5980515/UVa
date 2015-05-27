#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input ;
    int array1[1000] , sum , lvl ;
    for ( ; cin >> input && input != "0" ; )
    {
        sum = 0 , lvl = 0 ;
        for ( int i = 0 ; i < input.length() ; i++ )
            array1[i] = (int)input[i] - 48 ;
        for ( int i = 0 ; i < input.length() ; i++ )
            sum += array1[i] ;
        for ( lvl = 1 ; sum > 9 ; lvl ++ )
        {
            int sum2 = sum , sum3 = 0  ;
            for ( ; sum2 > 0 ; )
            {
                sum3 += sum2%10 ;
                sum2 /= 10 ;
            }
            sum = sum3 ;
        }
        if ( sum == 9 )
        {
            cout << input << " is a multiple of 9 and has 9-degree " << lvl << "." << endl ;
        }
        else
        {
            cout << input << " is not a multiple of 9." << endl ;
        }

    }
    return 0;
}

