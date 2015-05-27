#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n , array1[100] , count1 ;
    for ( ; cin >> n && n >= 0  ; )
    {
        if ( n == 0)
            cout << 0 << endl ;
        else
        {
            array1[0] = 0 ;
            for ( count1 = 0 ; n > 0 ; n /= 3 , count1++)
                array1[count1] = n %3 ;
            for ( int i = count1-1 ; i >= 0 ; i --)
                cout << array1[i] ;
            cout << endl ;
        }
    }
    return 0;
}
