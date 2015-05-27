#include <iostream>
#include <algorithm>

using namespace std;

int w , h ;
char array1[50][50] ;
int array2[100] ;
int array1_check[50][50] , amount = 1 ;
bool array3[50][50] ;

int DP(int x , int y )
{
    for ( int i = x + 1 ; i < h ; i ++)
    {
        if ( array1_check[i][y] == 0 && ( array1[i][y] == '*' || array1[i][y] == 'X' ) )
        {
            array1_check[i][y] = amount ;
            DP(i,y) ;
        }
        else
            break ;
    }
    for ( int i = x - 1 ; i >= 0 ; i -- )
    {
        if ( array1_check[i][y] == 0 && ( array1[i][y] == '*' || array1[i][y] == 'X' ) )
        {
            array1_check[i][y] = amount ;
            DP(i,y) ;
        }
        else
            break ;
    }
    for ( int i = y + 1 ; i < w ; i ++)
    {
        if ( array1_check[x][i] == 0 && ( array1[x][i] == '*' || array1[x][i] == 'X' ) )
        {
            array1_check[x][i] = amount ;
            DP(x,i) ;
        }
        else
            break ;
    }
    for ( int i = y - 1 ; i >= 0 ; i --)
    {
        if ( array1_check[x][i] == 0 && ( array1[x][i] == '*' || array1[x][i] == 'X' ) )
        {
            array1_check[x][i] = amount ;
            DP(x,i) ;
        }
        else
            break ;
    }
}

int DP2(int x , int y )
{
    for ( int i = x + 1 ; i < h ; i ++)
    {
        if ( array1[i][y] == 'X' && array3[i][y] == false )
        {
            array3[i][y] = true ;
            DP2(i,y) ;
        }
        else
            break ;
    }
    for ( int i = x - 1 ; i >= 0 ; i -- )
    {
        if ( array1[i][y] == 'X' && array3[i][y] == false )
        {
            array3[i][y] = true ;
            DP2(i,y) ;
        }
        else
            break ;
    }
    for ( int i = y + 1 ; i < w ; i ++)
    {
        if ( array1[x][i] == 'X' && array3[x][i] == false )
        {
            array3[x][i] = true ;
            DP2(x,i) ;
        }
        else
            break ;
    }
    for ( int i = y - 1 ; i >= 0 ; i --)
    {
        if ( array1[x][i] == 'X' && array3[x][i] == false )
        {
            array3[x][i] = true ;
            DP2(x,i) ;
        }
        else
            break ;
    }
}

int main()
{
    for ( int n = 0 ; cin >> w >> h && ( w !=0 && h != 0 ) ; n++ )
    {
        amount = 1 ;
        for ( int i = 0 ; i < 100 ; i ++ )
            array2[i] = 0 ;
        for ( int i = 0 ; i < h ; i ++ )
        {
            for ( int j = 0 ; j < w ; j ++ )
            {
                cin >> array1[i][j] ;
                array1_check[i][j] = 0 , array3[i][j] = false ;
            }
        }
        for ( int i = 0 ; i < h ; i ++ )
        {
            for ( int j = 0 ; j < w ; j ++ )
            {
                if ( ( array1[i][j] == 'X' || array1[i][j] == '*' ) && array1_check[i][j] == 0 )
                {
                    array1_check[i][j] = amount ;
                    DP(i,j);
                    amount ++ ;
                }
            }
        }
        for ( int i = 0 ; i < h ; i ++ )
        {
            for ( int j = 0 ; j < w ; j ++ )
            {
                if ( array1[i][j] == 'X' && array3[i][j] == false )
                {
                    array3[i][j] = true ;
                    DP2(i,j) ;
                    array2[array1_check[i][j]] ++ ;
                }
            }
        }
        if ( amount == 1 )
            amount = 2 ;
        sort(array2+1,array2+amount) ;
        cout << "Throw " << n+1 << endl ;
        for ( int i = 1 ; i < amount ; i ++ )
        {
            if ( i > 1 )
                cout << " " ;
            cout << array2[i] ;
        }
        cout << endl << endl  ;
    }
    return 0;
}
