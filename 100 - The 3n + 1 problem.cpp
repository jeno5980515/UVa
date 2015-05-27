#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v ;
    v.resize(1000000) ;
    for ( int i = 0 ; i < 1000000 ; i ++ )
        v[i] = 0 ;
    for ( int n , m ; cin >> n >> m ; )
    {
        cout << n << " " << m  ;
        if ( n > m )
        {
            int temp = n ;
            n = m ;
            m = temp ;
        }
        int maxlength = 0 ;
        for ( int i = n ; i <= m ; i ++ )
        {
            if ( v[i] != 0 )
                maxlength = max(maxlength,v[i]);
            else
            {
                int j = i , count = 0 ;
                while ( j > 1 )
                {
                    if ( j % 2 == 0 )
                        j /= 2 ;
                    else
                        j = 3 * j + 1 ;
                    count ++ ;
                }
                v[i] = count ;
                maxlength = max(maxlength,v[i]);
            }
        }
        cout << " " << maxlength + 1 << endl ;
    }
    return 0;
}
