#include <iostream>

using namespace std;

int main()
{
    int number ;
    bool array1[100] ;
    for ( ; cin >> number && number != 0 ; )
    {
        int m ;
        for ( int i = 1 ; i < 100000 ; i ++ )
        {
            for ( int j = 1 ; j <= number ; j ++ )
                array1[j] = true ;
            array1[1] = false ;
            int sum = 0 ;
            for ( int j = 1 , k = 0 ; j <= number ; j ++ )
            {
                if ( array1[j] == true )
                {
                    k ++ ;
                }
                if ( k == i )
                {
                    array1[j] = false ;
                    sum ++ ;
                    k = 0 ;
                }
                if ( j == number )
                    j = 1 ;
                if ( array1[13] == false )
                {
                    break ;
                }
            }
            if ( sum == number - 1)
            {
                m = i;
                break ;
            }
        }
        cout << m << endl ;
    }
    return 0;
}
