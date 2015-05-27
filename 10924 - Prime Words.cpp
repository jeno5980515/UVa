#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool array1[20000] ;
    string input ;
    int sum ;
    for ( int i = 0 ; i < 20000 ; i++)
        array1[i] = true ;
    for ( int i = 1 ; i < 20000 ; i++)
    {
        for ( int j = 2 ; j < i ; j++)
        {
            if ( i % j == 0)
                array1[i] = false ;
        }
    }
    for ( ; cin >> input  ; )
    {
        sum = 0 ;
        for ( int i = 0 ; i < input.length() ; i++)
        {
            if ( input[i] >= 'a' && input[i] <= 'z')
                sum += (int)input[i]-96 ;
            else if ( input[i] >= 'A' && input[i] <= 'z' )
                sum += (int)input[i]-64+26 ;
        }
        if ( array1[sum] == true)
            cout << "It is a prime word." << endl ;
        else
            cout << "It is not a prime word." << endl ;
    }
    return 0;
}


