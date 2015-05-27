#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number ;
    for ( ; cin >> number && number != "0" ; )
    {
        long long int sum = 0 ;
        for ( int i = number.length() - 1 , lvl = 2 ; i >= 0 ; i -- , lvl *= 2 )
        {
            sum += ( lvl - 1 ) * ( (int)number[i] - 48 );
        }
        cout << sum << endl ;
    }
    return 0;
}
