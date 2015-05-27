#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    long double s , a ;
    string input ;
    for ( ; cin >> s >> a >> input && !cin.eof() ; )
    {
        if ( a > 180 && input == "deg" )
            a = 360 - a ;
        else if ( a > (180*60) && input == "min" )
            a = 360*60 - a ;
        if ( input == "deg" )
            cout << fixed << setprecision(6) << 2 *(6440+s)*M_PI*a/360 << " " << sqrt(2*(6440+s)*(6440+s)-2*(6440+s)*(6440+s)*cos(a*M_PI / 180 )) << endl ;
        else if ( input == "min" )
            cout  <<  fixed << setprecision(6) << 2 * (6440+s)*M_PI*a/360/60 << " " << sqrt(2*(6440+s)*(6440+s)-2*(6440+s)*(6440+s)*cos(a/60*M_PI / 180 )) << endl ;
    }
    return 0;
}
