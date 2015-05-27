#include <iostream>
#include <string>
using namespace std;

int main()
{
    string array[5] ;
    array[1] = {"`1234567890-="} ;
    array[2] = {"QWERTYUIOP[]\ "} ;
    array[3] = {"ASDFGHJKL;'"} ;
    array[4] = {"ZXCVBNM,./"} ;
    string input ;
    int count = 0 , count2 = 0 ;
    for ( ; getline(cin,input) ;  )
    {
        for (int i = 0 ; i < input.length() ;  i ++  )
        {
            for ( int j = 1 , k = 1 ; j < array[k].length() ; j ++)
            {
                if ( input[i] == ' ')
                    break ;
                if ( input[i] == array[k][j])
                {
                    input[i] = array[k][j-1] ;
                    break ;
                }
                if ( j == array[k].length()- 1)
                {
                    j = 0 ;
                    k+=1 ;
                }
            }

        }
        for ( int i = 0 ; i < input.length() ; i ++)
            cout << input[i] ;
        cout << endl ;
    }
    return 0;
}
