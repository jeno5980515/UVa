#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int r , c ;
int array1[102][102] ;
int dp[102][102] ;

int dfs(int x , int y )
{
    if ( dp[x][y] != 0 )
        return dp[x][y] ;
    int n = 0 ;
    if ( array1[x][y] > array1[x-1][y])
    {
        n = max(n,dfs(x-1,y)) ;
    }
    if ( array1[x][y] > array1[x][y-1])
    {
        n = max(n,dfs(x,y-1)) ;
    }
    if ( array1[x][y] > array1[x+1][y])
    {
        n = max(n,dfs(x+1,y)) ;
    }
    if ( array1[x][y] > array1[x][y+1])
    {
        n = max(n,dfs(x,y+1)) ;
    }
    dp[x][y] = n + 1;
    return n + 1 ;

}

int main()
{
    int N ;
    cin >> N ;
    for ( int n = 0 ; n < N ; n ++ )
    {
        int maxpath = 0 ;
        string name ;
        cin >> name >> r >> c ;
        for ( int i = 0 ; i < 102 ; i ++ )
        {
            for ( int j = 0 ; j < 102 ; j ++ )
                array1[i][j] = 99999999 , dp[i][j] = 0 ;
        }
        for ( int i = 1 ; i <= r ; i ++ )
        {
            for ( int j = 1 ; j <= c ; j ++ )
                cin >> array1[i][j] ;
        }

        for ( int i = 1 ; i <= r ; i ++ )
        {
            for ( int j = 1 ; j <= c ; j ++ )
            {
                dp[i][j] = dfs(i,j) ;
                maxpath = max(maxpath,dp[i][j]) ;
            }
        }

        cout << name << ": " << maxpath << endl  ;
    }
    return 0;
}
