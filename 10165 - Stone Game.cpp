#include <iostream>

using namespace std;

int main()
{
    for ( int n ; cin >> n && n != 0 ; )
    {
        int sum = 0 ;
        for ( int n2 = 0 , input ; n2 < n && cin >> input ; n2 ++ )
            sum ^= input ;
        if ( sum != 0 )
            cout << "Yes" << endl ;
        else
            cout << "No" << endl ;
    }
    return 0;
}
