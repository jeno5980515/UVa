#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number , month , day , array1[13] , output ;
    array1[1] = 6 , array1[2] = 2 , array1[3] = 2 , array1[4] = 5 , array1[5] = 7 ;
    array1[6] = 3 , array1[7] = 5 , array1[8] = 1 , array1[9] = 4 , array1[10] = 6 ;
    array1[11] = 2 , array1[12] = 4 ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        cin >> month >> day ;
        for ( int i = 0 , j = array1[month] ; i < day ; i ++ , j++ )
        {
            if ( j == 8 )
                j = 1 ;
            output = j ;
        }
        if ( output == 1 )
            cout << "Monday"  ;
        else if ( output == 2 )
            cout << "Tuesday";
        else if ( output == 3 )
            cout << "Wednesday" ;
        else if ( output == 4 )
            cout << "Thursday";
        else if ( output == 5 )
            cout << "Friday"  ;
        else if ( output == 6 )
            cout << "Saturday"  ;
        else if ( output == 7 )
            cout << "Sunday"  ;
        cout << endl ;

    }
    return 0 ;
}
