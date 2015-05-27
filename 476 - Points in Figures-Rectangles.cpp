#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string input , a ;
    bool in = false ;
    int count1 = 1 , count2 = 1 ;
    double square[40] , point[20000] ;
    for ( int i = 1 ; cin >> a  && a!= "*" ; i +=4 , count1 +=4 )
        cin >> square[i] >> square[i+1] >> square[i+2] >> square[i+3] ;
    for ( int i = 1 ; cin >> point[i] >> point[i+1] && ( point[i] != 9999.9  && point[i+1] != 9999.9); i +=2 , count2+=2) ;
    for ( int i = 1 ; i < count2 ; i += 2)
    {
        for ( int j = 1 ; j < count1 ; j += 4)
        {
            if ( point[i] > square[j] && point[i] < square[j+2] )
            {
                if ( point[i+1] < square[j+1] && point[i+1] > square[j+3] )
                {
                    cout << "Point " << i/2+1 << " is contained in figure " << j/4+1 << endl;
                    in = true ;
                }
            }
        }
        if ( in == false )
            cout << "Point " << i/2+1 <<" is not contained in any figure" << endl ;
        in = false ;
    }
    return 0;
}
