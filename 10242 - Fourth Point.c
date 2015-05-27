#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    double array1[8] ;
    for (  ; !cin.eof() && cin >> array1[0] >> array1[1] >> array1[2] >> array1[3] >> array1[4] >> array1[5] >> array1[6] >> array1[7] ; )
    {
        double x , y ;
        for ( int i = 0 ; i < 8 ; i += 2 )
        {
            bool get = false ;
            for ( int j = 0 ; j < 8 ; j += 2)
            {
                if ( j == i )
                {
                    continue ;
                }
                if ( array1[j] == array1[i])
                {
                    x = array1[j] ;
                    y = array1[j+1] ;
                    get = true ;
                    break ;
                }
            }
            if ( get == true )
                break ;
        }
        cout << fixed << setprecision(3) << array1[0] + array1[2] + array1[4] + array1[6] - x * 3  << " " << array1[1] + array1[3] + array1[5] + array1[7] - y * 3 << endl ;
    }
    return 0;
}
