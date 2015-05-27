#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long number2 ;
    for ( ;  cin >> number2 && number2 >= 0 ;  )
    {
        cout << number2*(number2+1)/2+1 << endl  ;
    }
    return 0 ;
}
