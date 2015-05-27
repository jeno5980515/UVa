#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int array1[10] ;
    bool array2[10] ;
    int number ;
    cin >> number ;
    cin.ignore() ;
    for ( int n = 0 ; n < number ; n ++)
    {
        for ( int i = 0 ; i < 10 ; i ++ )
            array1[i] = 0 , array2[i] = false ;
        string input ;
        getline(cin,input);
        for ( int i = 0 ; i < input.length() ; i ++ )
        {
            if ( input[i] == 'a' )
            {
                for ( int i = 1 ; i <= 2 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[0] = false ;
                for ( int i = 3 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
            }
            else if ( input[i] == 'b' )
            {
                if ( array2[1] == false )
                    array1[1] ++ ;
                array2[1] = true ;
                array2[0] = false ;
                for ( int i = 2 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
            }
            else if ( input[i] == 'c' )
            {
                for ( int i = 1 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[0] = false ;
                for ( int i = 4 ; i < 6 ; i ++ )
                {
                    array2[i] = false ;
                }
                for ( int i = 6 ; i < 10 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
            }
            else if ( input[i] == 'd' )
            {
                for ( int i = 1 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[0] = false ;
                for ( int i = 4 ; i < 6 ; i ++ )
                {
                    array2[i] = false ;
                }
                for ( int i = 6 ; i < 9 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[9] = false ;
            }
            else if ( input[i] == 'e' )
            {
                for ( int i = 1 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[0] = false ;
                for ( int i = 4 ; i < 6 ; i ++ )
                {
                    array2[i] = false ;
                }
                for ( int i = 6 ; i <= 7 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[8] = false ;
                array2[9] = false ;
            }
            else if ( input[i] == 'f' )
            {
                for ( int i = 1 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[0] = false ;
                for ( int i = 4 ; i < 6 ; i ++ )
                {
                    array2[i] = false ;
                }
                for ( int i = 7 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
                if ( array2[6] == false )
                    array1[6] ++ ;
                array2[6] = true ;
            }
            else if ( input[i] == 'g' )
            {
                for ( int i = 1 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[0] = false ;
                for ( int i = 4 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
            }
            else if ( input[i] == 'A' )
            {
                for ( int i = 0 ; i < 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                for ( int i = 3 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
            }
            else if ( input[i] == 'B' )
            {
                for ( int i = 0 ; i <= 1 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                for ( int i = 2 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
            }
            else if ( input[i] == 'C' )
            {
                for ( int i = 2 ; i <= 2 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                for ( int i = 0 ; i < 2 ; i ++ )
                {
                    array2[i] = false ;
                }
                for ( int i = 3 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
            }
            else if ( input[i] == 'D' )
            {
                for ( int i = 0 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                for ( int i = 4 ; i < 6 ; i ++ )
                {
                    array2[i] = false ;
                }
                for ( int i = 6 ; i <= 8 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[9] = false ;
            }
            else if ( input[i] == 'E' )
            {
                for ( int i = 0 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                for ( int i = 4 ; i < 6 ; i ++ )
                {
                    array2[i] = false ;
                }
                for ( int i = 6 ; i <= 7 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                array2[8] = false ;
                array2[9] = false ;
            }
            else if ( input[i] == 'F' )
            {
                for ( int i = 0 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                for ( int i = 4 ; i < 6 ; i ++ )
                {
                    array2[i] = false ;
                }
                for ( int i = 6 ; i <= 6 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                for ( int i = 7 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
            }
            else if ( input[i] == 'G' )
            {
                for ( int i = 0 ; i <= 3 ; i ++ )
                {
                    if ( array2[i] == false )
                        array1[i] ++ ;
                    array2[i] = true ;
                }
                for ( int i = 4 ; i < 10 ; i ++ )
                {
                    array2[i] = false ;
                }
            }
        }
        cout << array1[0] ;
        for ( int i = 1 ; i < 10 ; i ++)
            cout << " " <<array1[i] ;
        cout << endl ;
    }

    return 0;
}
