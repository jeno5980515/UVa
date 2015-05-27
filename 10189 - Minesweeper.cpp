#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int side1 , side2 ;
    for (int q = 1 ; cin >> side1 >> side2 && ( side1 != 0 && side2 != 0 ) ; q++ )
    {
        if ( q != 1 )
            cout << endl ;
        int count[105][105] ;
        char map[105][105] ;
        for ( int i = 1 ; i <= side1 ; i++ )
            for ( int j = 1 ; j <= side2 ; j ++ )
                cin >> map[i][j] ;
        for ( int i = 0 ; i < 105 ; i++ )
            for ( int j = 0 ; j < 105 ; j ++ )
                count[i][j] = 0 ;
        for ( int i = 1 ; i <= side1 ; i++ )
            for ( int j = 1 ; j <= side2 ; j ++)
                if ( map[i][j] == '*')
                {
                    count[i][j] = -99999999 ;
                    for ( int m = i-1 ; m < i+2 ; m ++ )
                        for ( int n = j-1 ; n < j+2 ; n ++ )
                            count[m][n] ++ ;
                }
        cout << "Field #" << q << ":" << endl ;
        for ( int i = 1 ; i <= side1 ; i++ )
        {
            for ( int j = 1 ; j <= side2 ; j ++)
            {
                if ( count[i][j] < 0 )
                    cout << "*" ;
                else
                    cout << count[i][j] ;
            }
            cout << endl ;
        }



    }
    return 0;
}


