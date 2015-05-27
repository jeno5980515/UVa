#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
    int site ;
    string input , output ;
    for ( ; getline(cin,input) ; )
    {
        output = input ;
        site = 0 ;
        for ( int i = 0 ; i <= input.length() ; i++)
        {
            if ( i == input.length() )
            {
                for ( int j = site ; j < i ; j++)
                {
                    output[j] = input[i-(j-site)-1] ;
                }
            }
            else if ( input[i] == ' '  )
            {
                for ( int j = site ; j < i ; j++)
                {
                    output[j] = input[i-(j-site)-1] ;
                }
                output[i] = ' ';
                site = i+1 ;
            }

        }
        for ( int i = 0 ; i < input.length() ; i++)
            cout << output[i] ;
        cout << endl ;
    }
    return 0 ;
}
