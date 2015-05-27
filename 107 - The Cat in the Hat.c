#include <iostream>

using namespace std;

int main()
{
    int input1 , input2 ;
    for ( ; cin >> input1 >> input2 && input1 != 0 && input2 != 0; )
    {
        int n , sum = 0 , amount = 0 , n2 = input2 ;
        bool get = false ;
        if ( input2 == 1 )
            n = 2 ;
        else
        {
            for ( int i = 3 ; i <= input1 ; i ++ )
            {
                get = true ;
                for ( int j = input1 ; j > 1 ; j /= i )
                {
                    if ( j % i != 0 )
                    {
                        get = false ;
                        break ;
                    }
                }
                if ( get == true )
                {
                    n = i ;
                    break ;
                }
            }
        }
        if ( n == 2 )
        {
            for ( int i = 1 ; i <= input1 ; )
            {
                amount += n2 / ( n - 1 ) ;
                sum += i * n2 ;
                n2 /= ( n - 1 ) ;
                i *= n ;
            }
            amount -- ;
        }
        else
        {
            for ( int i = 1 ; i <= input1 ; )
            {
                amount += n2 / ( n - 1 ) ;
                sum += i * n2 ;
                n2 /= ( n - 1 ) ;
                i *= n ;
            }
        }
        cout << amount << " " << sum  << endl ;

    }
    return 0;
}
