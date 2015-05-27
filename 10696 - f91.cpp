#include <iostream>

using namespace std;

int main()
{
    int input ;
    for ( ; cin >> input && input != 0;)
    {
        if ( input <= 100 )
            cout << "f91(" << input << ") = " << 91 << endl ;
        else
            cout << "f91(" << input << ") = " << input-10 << endl ;
    }
    return 0 ;
}
