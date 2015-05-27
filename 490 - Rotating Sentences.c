#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input ;
    string array1[102] ;
    int sum = 0 , maxlength = 0 ;
    for ( ; getline(cin , input) ; )
    {
        array1[sum] = input ;
        sum ++ ;
        if ( input.length() > maxlength )
            maxlength = input.length() ;
    }

    for ( int i = 0 ; i < maxlength ; i ++ )
    {
        for ( int j = sum -1  ; j >= 0 ; j -- )
        {
            if ( i < array1[j].length() )
                cout << array1[j][i] ;
            else
                cout << " " ;
        }
        cout << endl ;
    }
    return 0;
}
