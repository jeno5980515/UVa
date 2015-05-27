#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    long long int x , array1[200000];
    string input ;
    for ( ; !cin.eof() && cin >> x ; )
    {
        cin.ignore();
        getline(cin,input) ;
        string s = "" ;
        int amount = 0 ;
        bool firstblank = false ;
        for ( int i = 0 ; i < input.length() ; i ++ )
        {
            if ( input[i] == ' ' )
            {
                if ( firstblank == false )
                {
                    int endpoint = 0  ;
                    if ( s[0] == '-' )
                        endpoint = 1 ;
                    int sum = 0 ;
                    for ( int j = s.length() - 1  ; j >= endpoint ; j -- )
                    {
                        int lvl = 1 ;
                        for ( int k = j ; k < s.length() - 1  ; k ++)
                            lvl *= 10 ;
                        sum += ((int)s[j] - 48 ) * lvl ;
                    }
                    if ( s[0] == '-' )
                        sum *= -1 ;
                    array1[amount] = sum ;
                    amount ++ ;
                    s = "" ;
                    firstblank = true ;
                }
            }
            else if ( i == input.length() - 1 )
            {
                s += input[i] ;
                int endpoint = 0 ;
                if ( s[0] == '-' )
                    endpoint = 1 ;
                int sum = 0 ;
                for ( int j = s.length() - 1 ; j >= endpoint ; j -- )
                {
                    int lvl = 1 ;
                    for ( int k = j ; k < s.length() - 1  ; k ++)
                        lvl *= 10 ;
                    sum += ((int)s[j] - 48 ) * lvl ;
                }
                if ( s[0] == '-' )
                    sum *= -1 ;
                array1[amount] = sum ;
                amount ++ ;
            }
            else
            {
                firstblank = false ;
                s += input[i] ;
            }
        }
        for ( int i = 0 ; i < amount ; i ++ )
            array1[i] *= ( amount - i - 1 ) ;
        int sum = array1[0] ;
        for ( int i = 1 ; i < amount - 1 ; i ++ )
        {
            sum = x * sum + array1[i] ;
        }
        cout << sum << endl ;

    }
    return 0;
}


