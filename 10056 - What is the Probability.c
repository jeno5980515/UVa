#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int number , total , which  ;
    cin >> number ;
    double p;
    for ( int n = 0 ; n < number ; n ++ )
    {
        double sum = 1 , a = 1 , r = 1 ;
        cin >> total >> p >> which ;
        for ( int i = 1 ; i < which ; i ++ )
            a *= ( 1 - p ) ;
        a *= p ;
        for ( int i = 0 ; i < total ; i ++ )
            r *= ( 1 - p ) ;
        if ( r == 1 )
            cout << 0.0000 << endl ;
        else
            cout << fixed <<setprecision(4) << a / ( 1 - r ) <<endl ;

    }
    return 0 ;
}
