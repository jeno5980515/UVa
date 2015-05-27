#include <iostream>

using namespace std;

int main()
{
    long long int my , other , num ;
    for ( ; cin >> my >> other && ! cin.eof() ;)
    {
        if ( my > other)
            num = my , my = other , other = num ;
        cout << other-my << endl ;
    }
    return 0;
}
