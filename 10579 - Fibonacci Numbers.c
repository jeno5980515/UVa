#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main()
{
    int number ;
    string array1[100000] ;
    array1[1] = array1[2] = "1" ;

    for ( int i = 3 ; i < 10000 ; i ++ )
    {
        string s1 = "" , s2 = "" ;
        for ( int j = 0 ; j < 1000 ; j ++ )
            s1 += '0' , s2 += '0' ;
        for ( int j = 0 ; j < array1[i-1].length() ; j ++ )
            s1[j] = array1[i-1][array1[i-1].length()-j-1];
        for ( int j = 0 ; j < array1[i-2].length() ; j ++ )
            s2[j] = array1[i-2][array1[i-2].length()-j-1];
        for ( int j = 0 ; j < array1[i-2].length() + 1 ; j ++  )
            s1[j] += s2[j] - 48 ;
        for ( int j = 0 ; j < array1[i-2].length() + 1 ; j ++ )
        {
            if ( s1[j] > '9' )
            {
                s1[j] -= 10 ;
                s1[j+1] ++ ;
            }
        }
        s2 = "" ;
        bool get = false ;
        for ( int j = s1.length() - 1 ; j >= 0 ; j -- )
        {
            if ( s1[j] != '0' )
                get = true ;
            if ( get == true )
                s2 += s1[j] ;
        }
        array1[i] = s2 ;
    }
    for ( ; cin >> number && !cin.eof() ; )
    {
        cout << array1[number] << endl ;
    }
    return 0;
}
