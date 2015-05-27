#include <iostream>
#include <string>
using namespace std;

int main()
{
    int b1 , g1 , c1 , b2 , g2 , c2 , b3 , g3 , c3 ;
    for ( ; cin >> b1 >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3 ; )
    {
        int sum = 0 ;
        string result ;
        sum = g1 + c1 + b2 + g2 + b3 + c3 ;
        result = "BCG" ;
        int sum2 = g1 + c1 + b2 + c2 + b3 + g3 ;
        if ( sum2 < sum )
        {
            result = "BGC" ;
            sum = sum2 ;
        }
        sum2 = g1 + b1 + g2 + c2 + b3 + c3 ;
        if ( sum2 < sum )
        {
            result = "CBG" ;
            sum = sum2 ;
        }
        sum2 = g1 + b1 + b2 + c2 + c3 + g3 ;
        if ( sum2 < sum )
        {
            result = "CGB" ;
            sum = sum2 ;
        }
        sum2 = b1 + c1 + g2 + c2 + b3 + g3 ;
        if ( sum2 < sum )
        {
            result = "GBC" ;
            sum = sum2 ;
        }
        sum2 = b1 + c1 + b2 + g2 + c3 + g3 ;
        if ( sum2 < sum )
        {
            result = "GCB" ;
            sum = sum2 ;
        }
        cout << result << " " << sum << endl ;
    }
    return 0;
}
