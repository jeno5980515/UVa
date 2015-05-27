#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input ;
    int array1[11] ;
    array1[0] = 2 , array1[1] = 3 , array1[2] = 5 , array1[3] = 7 , array1[4] = 9 , array1[5] = 10 ,array1[6] = 12 , array1[7] = 14 ,array1[8] = 16 , array1[9] = 17 , array1[10] = 19;
    for ( int n = 1 ; cin >> input ; n ++ )
    {
        int sum = 0 ;
        if ( n < 10)
            cout << "   " ;
        else if ( n >= 10 && n < 100)
            cout << "  ";
        else if ( n >= 100 && n < 1000)
            cout << " " ;
        else if ( n >= 1000 )
            cout << "" ;
        cout << n << ". " ;
        int length = input.length() ;
        for ( int i = 0 ; input[0] == '0' ;  )
        {
            if ( length == 1  )
                break ;
            for ( int j = i ; j < length ; j++ )
                input[j] = input[j+1] ;
            length -= 1 ;
        }
        for ( int i = length - 1 , j = 1 ; i > 0 ; i -- , j ++ )
        {
            if ( j == array1[sum] )
            {
                sum ++ ;
                for ( int k = length ; k > i ; k -- )
                {
                    input[k] = input[k-1] ;
                }
                input[i] = ' ' ;
                length ++ ;
            }
        }
        for ( int i = 0 ; i < length ; i++ )
        {
            if ( input[i] == '0' && input[i+1] == '0' && i != length -1  )
            {
                if ( sum % 4 == 0 )
                {
                    i += 1 ;
                    continue ;
                }
                else
                {
                    sum -- ;
                    i += 2 ;
                    continue ;
                }
            }
            else if ( input[i] == '0' && input[i-1] == ' ' && input[i+1] == ' ' )
            {
                sum -- ;
                i += 1 ;
                continue ;
            }
            else if ( input[i] == '0' && input[i+1] != '0' && input[i-1] == ' '  )
            {
                continue ;
            }
            if ( input[i] != ' ' && input[i-1] == ' ')
                cout << " " ;
            if ( input[i] != ' ' && input[i-1] == '0')
                cout << " " ;
            if ( input[i] != ' '  )
                cout << input[i] ;
            else if ( input[i] == ' ' )
            {
                cout << " " ;
                if ( sum % 4 == 0 )
                    cout << "kuti" ;
                else if ( sum % 4 == 3 )
                    cout << "lakh" ;
                else if ( sum % 4 == 2 )
                    cout << "hajar" ;
                else if ( sum % 4 == 1 )
                    cout << "shata" ;
                sum -- ;
            }
        }
        cout << endl ;

    }
    return 0;
}
