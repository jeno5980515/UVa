#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number , array1[36] , minnumber[36] , minsum , mintotal ;
    cin >> number ;
    for ( int n = 0 ; n <number ; n ++)
    {
        if ( n > 0 )
            cout << endl ;
        cout << "Case " << n+1 << ":" << endl ;
        for ( int i = 0 ; i < 36 ; i ++)
            cin >> array1[i] ;
        int number2 ;
        cin >> number2 ;
        for ( int n2 = 0 ; n2 < number2 ; n2 ++ )
        {
            long long int input ;
            cin >> input ;
            minsum = 999999 , mintotal = 0 ;
            for ( int i = 2 ; i <= 36 ; i ++ )
            {
                int sum = 0 ;
                for ( int j = input ; j > 0 ; )
                {
                    sum += array1[j%i] ;
                    j /= i ;
                }
                if ( sum < minsum)
                {
                    minsum = sum ;
                    minnumber[0] = i ;
                    mintotal = 1 ;
                }
                else if ( sum == minsum)
                {
                    minnumber[mintotal] = i ;
                    mintotal ++ ;
                }
            }
            cout << "Cheapest base(s) for number " << input << ":" ;
            for ( int i = 0 ; i < mintotal ; i ++ )
                cout << " " << minnumber[i] ;
            cout << endl ;

        }
    }

    return 0;
}
