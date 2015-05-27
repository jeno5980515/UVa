#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number ;
    string str ;
    cin >> number ;
    cin.ignore() ;
    int sum ;
    for ( int i = 0 ; getline(cin,str) && i < number ; i ++)
    {
        sum = (((int)str[0])-65) *26*26+(((int)str[1])-65)*26 + (((int)str[2])-65) - (((int)str[4])-48)*1000 - (((int)str[5])-48)*100  -(((int)str[6])-48)*10  - (((int)str[7])-48) ;
        if ( sum < 0)
            sum*= -1 ;
        if ( sum <= 100)
            cout << "nice" << endl ;
        else
            cout << "not nice" << endl ;
    }
    return 0;
}
