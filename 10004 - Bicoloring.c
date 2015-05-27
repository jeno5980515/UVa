#include <iostream>
#include <string>
using namespace std;

bool connect[200][200] , arrive[200];
int node , edge ;
int count1 = 0 ;
int main()
{
    bool DFS(int , int , int ) ;
    bool DFS2(int , int , int ) ;
    for (  ; cin >> node && node != 0 ; )
    {
        bool bic = true ;
        cin >> edge ;
        for ( int i = 0 ; i < 200 ; i++)
            for ( int j = 0 ; j < 200 ; j ++)
                connect[i][j] = false ;
        int x , px ;
        for ( int i = 0 ; i < edge && cin >> x >> px ; i ++)
            connect[x][px] = true , connect[px][x] = true ;
        for ( int i = 1 ; i < node+1 ; i ++)
        {
            if ( node % 2 == 1 && edge == node && node != 1 )
            {
                bic = false ;
                cout << "NOT BICOLORABLE." << endl ;
                break ;
            }
            else if ( ( node % 2 == 0 && edge == node ) || node == 2 || node == 1)
            {
                bic = true ;
                break ;
            }
            bic = DFS2(i,i, i) ;
            if ( bic == false )
            {
                cout << "NOT BICOLORABLE." << endl ;
                break ;
            }
        }
        if ( bic == true )
            cout << "BICOLORABLE." << endl ;
    }
    return 0;

}

bool DFS(int x ,int px , int gp)
{
    bool b = true;
    for ( int y = 1 ; y < node ; y ++)
    {
        if ( connect[x][y] && y != px && y != gp  )
        {
            for ( int i = 1 ; i < count1 ; i ++)
            {
                if ( arrive[i] == y )
                {
                    b = false ;
                    return b ;
                }
            }
            if ( b != false )
            {
                arrive[count1] = y ;
                count1 ++ ;
                b = DFS(y,x,gp) ;
                count1 -- ;
            }
        }
    }
    return b ;
}

bool DFS2(int x ,int px , int gp)
{
    bool b = true;
    for ( int y = 1 ; y < node ; y ++)
    {
        if ( connect[x][y] && y != px && y != gp )
        {
            b = DFS(y,x,gp) ;
        }
        else if ( connect[x][y] && y != px && y == gp)
        {
            b = false ;
            return b ;
        }
    }
    return b ;
}





