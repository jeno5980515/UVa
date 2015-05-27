#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int number ;
    for ( int n2 = 1 ; cin >> number && number != 0  ; n2 ++)
    {
        int array1[50] = {0} , sum = 0 , average = 0 , amount = 0 ;
        for ( int n = 0 ; n < number ; n ++ )
        {
            cin >> array1[n] ;
            sum += array1[n] ;
        }
        average = sum / number ;
        for ( int i = 0 ; i < number ; i ++ )
        {
            if ( array1[i] > average )
                amount += array1[i] - average ;
        }
        cout << "Set #" << n2 << endl ;
        cout << "The minimum number of moves is " << amount << "." << endl << endl  ;
    }
    return 0;
}
