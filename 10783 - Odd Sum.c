#include <iostream>

using namespace std;

int main()
{
    int number ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++)
    {
        int l , u ;
        cin >> l >> u ;
        int sum = 0 ;
        for ( int i = l ; i <= u ; i++)
            if ( i % 2 == 1)
                sum += i ;
        cout << "Case " << n+1 << ": " << sum << endl ;
    }
    return 0;
}
