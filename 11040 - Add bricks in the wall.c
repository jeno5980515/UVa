#include <iostream>

using namespace std;

int main()
{
    int number , a1 , a2[2] , a3[3] , a4[4] , a5[5] , a6[6] , a7[7] ,a8[8] ,a9[9];
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        cin >> a1 >> a3[0] >> a3[2] >> a5[0] >> a5[2] >> a5[4] >> a7[0] >> a7[2] >> a7[4] >> a7[6] >> a9[0] >> a9[2] >> a9[4] >> a9[6] >> a9[8] ;
        for ( int i = 0 ; i <= 6 ; i += 2 )
        {
            for ( int j = 0 ; j <= a7[i] ; j ++)
            {
                if ( a7[i] == a9[i] + 2 * j + a9[i+2] )
                {
                    a9[i+1] = j ;
                    a8[i] = a9[i] + j ;
                    a8[i+1] = a9[i+2] + j ;
                    break ;
                }
            }
        }
        for ( int i = 0 ; i <= 4 ; i += 2 )
        {
            for ( int j = 0 ; j <= a5[i] ; j ++)
            {
                if ( a5[i] == a7[i] + 2 * j + a7[i+2] )
                {
                    a7[i+1] = j ;
                    a6[i] = a7[i] + j ;
                    a6[i+1] = a7[i+2] + j ;
                    break ;
                }
            }
        }
        for ( int i = 0 ; i <= 2 ; i += 2 )
        {
            for ( int j = 0 ; j <= a3[i] ; j ++)
            {
                if ( a3[i] == a5[i] + 2 * j + a5[i+2] )
                {
                    a5[i+1] = j ;
                    a4[i] = a5[i] + j ;
                    a4[i+1] = a5[i+2] + j ;
                    break ;
                }
            }
        }
        for ( int j = 0 ; j <= a1 ; j ++)
        {
            if ( a1 == a3[0] + 2 * j + a3[2] )
            {
                a3[1] = j ;
                a2[0] = a3[0] + j ;
                a2[1] = a3[2] + j ;
                break ;
            }
        }
        cout << a1 << endl ;
        cout << a2[0] << " " << a2[1] << endl ;
        cout << a3[0] << " " << a3[1] << " " << a3[2] << endl ;
        cout << a4[0] << " " << a4[1] << " " << a4[2] << " " << a4[3] << endl ;
        cout << a5[0] << " " << a5[1] << " " << a5[2] << " " << a5[3] << " " << a5[4] << endl ;
        cout << a6[0] << " " << a6[1] << " " << a6[2] << " " << a6[3] << " " << a6[4] << " " << a6[5] << endl ;
        cout << a7[0] << " " << a7[1] << " " << a7[2] << " " << a7[3] << " " << a7[4] << " " << a7[5] << " " << a7[6] << endl ;
        cout << a8[0] << " " << a8[1] << " " << a8[2] << " " << a8[3] << " " << a8[4] << " " << a8[5] << " " << a8[6] << " " << a8[7] << endl ;
        cout << a9[0] << " " << a9[1] << " " << a9[2] << " " << a9[3] << " " << a9[4] << " " << a9[5] << " " << a9[6] << " " << a9[7] << " " << a9[8] << endl ;
    }
    return 0;
}
