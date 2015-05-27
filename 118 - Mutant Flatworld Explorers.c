#include <iostream>
#include <string>
using namespace std;

int main()
{
    int length , width ;
    cin >> length >> width ;
    int x , y ;
    string face  ;
    bool array1[50][50] ;
    for ( int i = 0 ; i < 50 ; i ++ )
    {
        for ( int j = 0 ; j < 50 ; j ++ )
            array1[i][j] = false ;
    }
    for ( ; cin >> x >> y >> face ; )
    {
        bool lost = false ;
        cin.ignore() ;
        string input ;
        getline(cin,input) ;
        for ( int i = 0 ; i < input.length() ; i ++ )
        {
            if ( face == "W" )
            {
                if ( input[i] == 'F' )
                {
                    if ( array1[x][y] != true ||  x - 1 >= 0)
                        x -- ;
                }
                else if ( input[i] == 'R' )
                {
                    face = "N" ;
                }
                else if ( input[i] == 'L' )
                {
                    face = "S" ;
                }
            }
            else if ( face == "E" )
            {
                if ( input[i] == 'F' )
                {
                    if ( array1[x][y] != true || x + 1 <= length )
                        x ++ ;
                }
                else if ( input[i] == 'R' )
                {
                    face = "S" ;
                }
                else if ( input[i] == 'L' )
                {
                    face = "N" ;
                }

            }
            else if ( face == "S" )
            {
                if ( input[i] == 'F' )
                {
                    if ( array1[x][y] != true || y - 1 >= 0 )
                        y -- ;
                }
                else if ( input[i] == 'R' )
                {
                    face = "W" ;
                }
                else if ( input[i] == 'L' )
                {
                    face = "E" ;
                }
            }
            else if ( face == "N" )
            {
                if ( input[i] == 'F' )
                {
                    if ( array1[x][y] != true || y + 1 <= width )
                        y ++ ;
                }
                else if ( input[i] == 'R' )
                {
                    face = "E" ;
                }
                else if ( input[i] == 'L' )
                {
                    face = "W" ;
                }
            }
            if ( x > length || y > width || x < 0 || y < 0 )
            {
                lost = true ;
                if ( x > length )
                {
                    x -- ;
                    array1[x][y] = true ;
                }
                else if ( x < 0 )
                {
                    x ++ ;
                    array1[x][y] = true ;
                }
                else if ( y > width )
                {
                    y -- ;
                    array1[x][y] = true ;
                }
                else if ( y < 0 )
                {
                    y ++ ;
                    array1[x][y] = true ;
                }
            }
            if ( lost == true )
                break ;
        }
        cout << x << " " << y << " " << face ;
        if ( lost == true )
            cout << " LOST" ;
        cout << endl ;
    }
    return 0;
}
