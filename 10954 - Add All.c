#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int number ;
    for ( ; cin >> number && number != 0 ; )
    {
        int array1[10000] ;
        for ( int n = 0 ; n < number ; n ++ )
            cin >> array1[n] ;
        int sum = 0 , num = 0  ;
        for ( int j = number ; j > 1 ; j -- )
        {
            sort(array1,array1+j) ;
            num = array1[0] + array1[1] ;
            array1[0] = num ;
            for ( int i = 1 ; i < j  ; i ++ )
                array1[i] = array1[i+1] ;
            sum += num ;
        }
        cout << sum << endl ;

    }
    return 0;
}
