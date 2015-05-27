#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string input ;
    for ( ; cin >> input && input != "." ; )
    {
        int n ;
        for ( int i = 0 ; i < input.length() ; i ++ )
        {
            if ( input.length() % ( i + 1 ) != 0 )
            {
                continue ;
            }
            string s = "" ;
            bool same = true ;
            for ( int j = 0 ; j <= i ; j ++ )
            {
                s += input[j] ;
            }
            for ( int j = 0 ; j < input.length() ; j += s.length() )
            {
                for ( int k = 0 ; k < s.length() ; k ++ )
                {
                    if ( s[k] != input[j+k] )
                    {
                        same = false ;
                        break ;
                    }
                }
                if ( same == false )
                    break ;
            }
            if ( same == true )
            {
                n = input.length() / ( i + 1 ) ;
                break ;
            }
        }
        cout << n << endl ;
    }
    return 0 ;
}
