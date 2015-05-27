#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string input ;
    int count = 0  ;
    for ( ; getline(cin,input) ;)
    {
        for (int i = 0 ; i< input.length() ; i ++)
            cout << char(input[i] -7)  ;
        cout << endl ;
    }
    return 0;
}
