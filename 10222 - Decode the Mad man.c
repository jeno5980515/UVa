#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input ;
    string array1[4] ;
    array1[0] = "`1234567890-=\ " , array1[1] = "qwertyuiop[]" , array1[2] = "asdfghjkl;'" , array1[3] = "zxcvbnm,./" ;
    for ( ; getline(cin,input) ; )
    {
        for ( int i = 0 ; i < input.length() ; i++ )
        {
            if ( input[i] == ' ' )
                continue ;
            for ( int j = 0 ; j < 4 ; j ++  )
            {
                bool get = false ;
                for ( int k = 0 ; k < array1[j].length() ; k ++)
                {
                    if ( input[i] == array1[j][k] )
                    {
                        input[i] = array1[j][k-2] ;
                        get = true ;
                        break ;
                    }
                }
                if ( get == true )
                    break ;
            }
        }
        cout << input << endl ;
    }
    return 0;
}
