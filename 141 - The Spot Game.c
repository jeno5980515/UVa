#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool array1[50][50][100] , array2[50][50][100] , array3[50][50][100] , array4[50][50][100] ;
    int number , x2 , y2 , winner = -1 ;
    string op ;
    for ( ; cin >> number && number != 0 ; )
    {
        winner = -1 ;
        for ( int i = 0 ; i < 50 ; i ++ )
        {
            for ( int j = 0 ; j < 50 ; j ++ )
            {
                for ( int k = 0 ; k < 100 ; k ++ )
                    array1[i][j][k] = false , array2[i][j][k] = false , array3[i][j][k] = false , array4[i][j][k] = false ;
            }
        }
        for ( int n = 0 ; n < number * 2 ; n ++ )
        {
            bool same = true;
            cin >> x2 >> y2 >> op ;
            if ( winner != -1 )
            {
                continue ;
            }
            int x = x2 - 1 , y = y2 - 1 ;
            if ( n > 0 )
            {
                for ( int i = 0 ; i < 50 ; i ++)
                {
                    for ( int j = 0 ; j < 50 ; j ++ )
                        array1[i][j][n] = array1[i][j][n-1] ;
                }
            }
            if ( op == "+" )
                array1[x][y][n] = true ;
            else if ( op == "-" )
                array1[x][y][n] = false ;
            for ( int i = 0 ; i < n ; i ++ )
            {
                for ( int j = 0 ; j < 50 ; j ++ )
                {
                    for ( int k = 0 ; k < 50 ; k ++ )
                    {
                        if ( array1[j][k][i] != array1[j][k][n] )
                        {
                            same = false ;
                            break ;
                        }
                    }
                    if ( same == false )
                        break ;
                }
                if ( same == true )
                {
                    winner = n ;
                    break ;
                }
                same = true ;
            }
            for ( int i = 0 ; i < n ; i ++ )
            {
                for ( int j = 0 ; j < 50 ; j ++ )
                {
                    for ( int k = 0 ; k < 50 ; k ++ )
                    {
                        if ( array2[j][k][i] != array1[j][k][n] )
                        {
                            same = false ;
                            break ;
                        }
                    }
                    if ( same == false )
                        break ;
                }
                if ( same == true )
                {
                    winner = n ;
                    break ;
                }
                same = true ;
            }
            for ( int i = 0 ; i < n ; i ++ )
            {
                for ( int j = 0 ; j < 50 ; j ++ )
                {
                    for ( int k = 0 ; k < 50 ; k ++ )
                    {
                        if ( array3[j][k][i] != array1[j][k][n] )
                        {
                            same = false ;
                            break ;
                        }
                    }
                    if ( same == false )
                        break ;
                }
                if ( same == true )
                {
                    winner = n ;
                    break ;
                }
                same = true ;
            }
            for ( int i = 0 ; i < n ; i ++ )
            {
                for ( int j = 0 ; j < 50 ; j ++ )
                {
                    for ( int k = 0 ; k < 50 ; k ++ )
                    {
                        if ( array4[j][k][i] != array1[j][k][n] )
                        {
                            same = false ;
                            break ;
                        }
                    }
                    if ( same == false )
                        break ;
                }
                if ( same == true )
                {
                    winner = n ;
                    break ;
                }
                same = true ;
            }
            for ( int i = 0 ; i < number ; i ++ )
            {
                for ( int j = 0 ; j < number ; j ++ )
                    array2[i][j][n] = array1[j][number-i-1][n] ;
            }
            for ( int i = 0  ; i < number ; i ++ )
            {
                for ( int j = 0 ; j < number ; j ++ )
                    array3[i][j][n] = array2[j][number-i-1][n] ;
            }
            for ( int i = 0  ; i < number ; i ++ )
            {
                for ( int j = 0 ; j < number ; j ++ )
                    array4[i][j][n] = array3[j][number-i-1][n] ;
            }
        }
        if ( winner == -1 )
            cout << "Draw" << endl ;
        else
            cout << "Player " << 2 - (winner % 2) << " wins on move " << winner + 1 << endl ;
    }
    return 0;
}
