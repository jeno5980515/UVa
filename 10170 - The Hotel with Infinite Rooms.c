#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    long long int s , d ;
    for ( ; cin >> s >> d ; )
    {
        for ( long long int i = 0 ; i < d ;  )
        {
            i += s ;
            s ++ ;
       }
        cout << s -1  << endl ;
    }
    return 0;
}
