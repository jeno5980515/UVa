#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int number ;
    for ( ; cin >> number && number != 0 ; )
    {
        int up = 1 , down = 6, left = 3 , right = 4 , thefront = 2, theback = 5 ;
        for ( int n = 0 ; n < number ; n ++ )
        {
            string input ;
            cin >> input ;
            if ( input == "north" )
            {
                int n = up ;
                up = theback , theback = down , down = thefront , thefront = n ;
            }
            else if ( input == "east" )
            {
                int n = up ;
                up = left , left = down , down = right , right = n ;
            }
            else if ( input == "west" )
            {
                int n = up ;
                up = right , right = down , down = left , left = n ;
            }
            else if ( input == "south" )
            {
                int n = up ;
                up = thefront , thefront = down , down = theback , theback = n ;
            }
        }
        cout << up << endl ;
    }

    return 0;
}
