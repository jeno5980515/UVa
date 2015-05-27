#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

int main()
{
    double n , p ;
    for ( ; cin >> n >> p ;)
    {
        cout << fixed << setprecision(0) << pow(p,double(1/n))  << endl;
    }

    return 0;
}
