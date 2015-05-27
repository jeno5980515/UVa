#include <iostream>

using namespace std;

int main()
{
    int number ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++)
    {
        int total , sub ;
        cin >> total >> sub ;
        int a = ( total + sub ) / 2 ;
        int b = ( total - sub ) / 2 ;
        if ( a < 0 || b < 0 || ( total + sub )% 2 != 0 )
            cout << "impossible" << endl ;
        else
        {
            if ( a > b )
                cout << a << " " << b << endl ;
            else
                cout << b << " " << a << endl ;
        }
    }
    return 0;
}
