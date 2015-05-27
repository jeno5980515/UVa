#include <iostream>

using namespace std;

int main()
{
    int n1 , n2 ;
    for ( ; cin >> n1 >> n2 && n1 != -1 && n2 != -1 ;)
    {
        if ( n1 > n2 )
        {
            int num = n1 ;
            n1 = n2 ;
            n2 = num ;
        }
        if ( n2 - n1 > 50 )
            cout << n1+100-n2 << endl ;
        else
            cout << n2-n1 << endl ;
    }
    return 0;
}
