#include <iostream>

using namespace std;

int main()
{
    int number , high[10000] , length[10000] ;
    cin >> number ;
    for ( int n = 0 ; n < number && cin >> high[n] >> length[n]  ; n++ );

    for ( int n = 0 ; n < number ; n ++)
    {
        for ( int k = 0 ; k < length[n] ; k ++)
        {
            for ( int i = 1 ; i <= high[n] ; i++  )
            {
                for ( int j = 0 ; j < i ; j++  )
                    cout << i ;
                cout << endl ;

            }
            for ( int i =  high[n]-1 ; i > 0 ; i-- )
            {
                for ( int j = i ; j > 0 ; j-- )
                    cout << i ;
                cout << endl ;
            }
            if ( (n < number-1 && k < length[n]) || (n < number && k < length[n]-1))
                cout << endl ;
        }

     }
    return 0;
}
