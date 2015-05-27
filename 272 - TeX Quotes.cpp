#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string input ;
    int count = 0  ;
    for ( ; getline(cin,input) ;)
    {
       for ( int i = 0 ; i < input.length()  ; i++)
       {
           if ( input[i] == '"' )
           {
                if ( count % 2 == 0)
                    cout << '`' << '`' ;
                else
                    cout << '\'' << '\'' ;
                count += 1 ;
           }
           else
           {
                cout << input[i] ;
           }
       }
       cout << endl ;
    }
    return 0;
}
