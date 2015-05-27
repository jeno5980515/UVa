#include <iostream>
#include <iostream>
using namespace std;

long long int n , k  ;
int main()
{
    for ( ; cin >> n >> k ; )
    {
        cout << n + (n-1)/(k-1) << endl ;
    }
    return 0;
}

