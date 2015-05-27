#include <iostream>

using namespace std;

int main()
{
    int input ;
    int ary[10000];
    int cou = 0 ;
    for ( int i = 0 ; i < 10000 ; i ++)
        ary[i] = 0 ;
    for ( ; cin >> input ;  )
    {
        if ( cou == 0 )
            ary[1] = input ;
        cou ++ ;
        for ( int i = 1 ; i <= cou ; i++)
        {
            if ( (input >=ary[i] && input <=ary[i+1]) || (input >=ary[i] && i == cou-1))
            {
                for ( int j = cou ; j >= i+2 ; j -- )
                    ary[j] = ary[j-1] ;
                ary[i+1] = input ;
                break ;
            }
        }
        if ( cou % 2 == 1)
            cout << ary[(cou+1)/2] << endl ;
        else
            cout << ( ary[cou/2] + ary[cou/2+1 ] ) /2 << endl ;

    }
    return 0;
}


