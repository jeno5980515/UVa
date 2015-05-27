#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int number , number2 ;
    for ( ; cin >> number && number != 0 ; )
    {

        number2 = sqrt(number) ;
        if ( number2*number2 == number )
            cout << "yes" << endl ;
        else
            cout << "no" << endl ;
    }
    return 0;
}


