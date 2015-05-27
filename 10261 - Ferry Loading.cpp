#include <iostream>
#include <queue>
using namespace std;

int w[2005] , carcount = 1 , sum[2005] , maxcar = 0 , maxlength = 0 , dp[2005][10005] , length ;
queue <int> q ;

void topdown(int x , int y ){
    if ( x - 1 < 0 )
        return ;
    if ( dp[x-1][y] == 1 && sum[x] - y <= length ){
        topdown(x-1,y) ;
        q.push(1) ;
    } else if ( y >= w[x] && dp[x-1][y-w[x]] == 1 ){
        topdown(x-1,y-w[x]) ;
        q.push(0) ;
    }
}

int main()
{
    int n ;
    cin >> n ;
    w[0] = 0 , sum[0] = 0 ;
    for ( int n2 = 0 ; n2 < n && cin >> length ; n2 ++ ){
        if ( n2 > 0 ) cout << endl ;
        length *= 100 , carcount = 1 , maxcar = 0 , maxlength = 0 ;
        dp[0][0] = 0 ;
        while( cin >> w[carcount] && w[carcount] != 0 ){
            sum[carcount] = sum[carcount-1] + w[carcount] ;
            carcount ++ ;
        }
        for ( int i = 0 ; i < carcount + 1 ; i ++ ){
            for ( int j = 0 ; j < length + 1 ; j ++ ){
                dp[i][j] = 0 ;
            }
        }
        dp[0][0] = 1 ;
        for ( int i = 1 ; i <= carcount - 1 ; i ++ ){
            for ( int j = 0 ; j <= length ; j ++ ){
                if ( (j >= w[i] && dp[i-1][j-w[i]] == 1) || (sum[i] - j <= length && dp[i-1][j] == 1) ){
                    maxcar = i ;
                    maxlength = j ;
                    dp[i][j] = 1 ;
                }
            }
        }
        cout << maxcar << endl ;
        topdown(maxcar,maxlength);
        int first ;
        if ( !q.empty() )
            first = q.front() ;
        while ( !q.empty() ){
            int element = q.front() ;
            if ( element == first )
                cout << "port" << endl ;
            else
                cout << "starboard" << endl ;
            q.pop() ;
        }
    }
    return 0;
}
