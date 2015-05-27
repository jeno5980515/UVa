#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input ;
    double sum ;
    int sum2 ;
    for ( ; cin >> input && input != "*" ; )
    {
        sum = 0 , sum2 = 0;
        for ( int i = 1 ; i < input.length() ; i++ )
        {
            if ( input[i] == 'W' )
                sum += 1 ;
            else if ( input[i] == 'H')
                sum += 0.5 ;
            else if ( input[i] == 'Q' )
                sum += 0.25 ;
            else if ( input[i] == 'E' )
                sum += 0.125 ;
            else if ( input[i] == 'S' )
                sum += 0.0625 ;
            else if ( input[i] == 'T' )
                sum += 0.03125 ;
            else if ( input[i] == 'X' )
                sum += 0.015625 ;
            else if ( input[i] == '/')
            {
                if ( sum == 1 )
                    sum2 += 1 ;
                sum = 0 ;
            }
        }
        cout << sum2 << endl ;
    }
    return 0;
}
