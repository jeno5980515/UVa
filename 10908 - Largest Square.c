#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int number ;
    string array1[100] ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n++ )
    {
        int M , N , Q ;
        cin >> M >> N >> Q ;
        cin.ignore() ;
        for ( int i = 0 ; i < M ; i ++ )
        {
            getline(cin,array1[i]) ;
        }
        cout << M << " " << N << " " << Q << endl ;
        for ( int n2 = 0 ; n2 < Q ; n2 ++ )
        {
            int r , c ;
            cin >> r >> c ;
            int r2 = r , c2 = c , point , outpoint = 0 ;
            char center = array1[r][c] ;
            if ( r == 0 || r == M - 1 || c == 0 || c == N -1 )
            {
                cout << 1 << endl ;
                continue ;
            }
            else if ( c2 >= N || c2 < 0 || r2 >= M || r2 < 0 )
                cout << 0 << endl ;
            for ( int i = 1  ;  ; i ++ )
            {
                for ( int j = 0 ; j < ( i + 1 )/ 2  ; j ++ )
                {
                    if ( i % 4 == 1 )
                    {
                        if ( j == ( i + 1 )/ 2 - 1  )
                            outpoint = 1 ;
                        else
                            outpoint = 0 ;
                        r -- , point = 1 ;
                    }
                    else if ( i % 4 == 2 )
                    {
                        if ( j == ( i + 1 )/ 2 - 1  )
                            outpoint = 1 ;
                        else
                            outpoint = 0 ;
                        c ++ , point = 2 ;
                    }
                    else if ( i % 4 == 3 )
                    {
                        if ( j == ( i + 1 )/ 2 - 1  )
                            outpoint = 1 ;
                        else
                            outpoint = 0 ;
                        r ++ , point = 3 ;
                    }
                    else if ( i % 4 == 0 )
                    {
                        if ( j == ( i + 1 )/ 2 - 1  )
                            outpoint = 1 ;
                        else
                            outpoint = 0 ;
                        c -- , point = 4 ;
                    }
                    if ( c >= N || c < 0 || r >= M || r < 0 )
                        break ;
                    if ( array1[r][c] != center )
                        break ;
                }
                if ( c >= N || c < 0 || r >= M || r < 0 )
                    break ;
                if ( array1[r][c] != center )
                    break ;
            }
            if ( r2 == r + 1 && c == c2)
                cout << 1 << endl ;
            else if ( point == 1 )
            {
                cout << ( c2 - c + outpoint ) * 2 - 1 << endl ;
            }
            else if ( point == 2 )
            {
                cout << ( r2 - r  ) * 2 - 1 << endl ;
            }
            else if ( point == 3 )
            {
                cout << ( c - c2 ) * 2 - 1<< endl ;
            }
            else if ( point == 4 )
            {
                cout << ( r - r2 ) * 2 - 1 << endl ;
            }
        }
    }
    return 0;
}
