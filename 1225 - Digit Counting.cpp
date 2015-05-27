#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
    int number , array1[10] , input ;
    cin >> number ;
    for (int n = 0 ; n < number && cin >> input ; n++ )
    {
        for ( int i = 0 ; i < 10 ; i++)
            array1[i] = 0 ;
        for ( int i = 1 ; i <= input ; i++)
        {
            for ( int j = i ; j > 0 ; j /= 10)
            {
                array1[j%10] ++ ;
            }
        }
        for ( int i = 0 ; i < 10 ; i++)
        {
            cout << array1[i]  ;
            if ( i != 9 )
                cout << " " ;
        }

        cout << endl ;
    }
    return 0 ;
}
