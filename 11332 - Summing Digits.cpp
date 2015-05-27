#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input ;
    int array1[1000] ,sum , result ;
    int DP(int) ;
    for ( ; cin >> input && input != "0" ; )
    {
        sum = 0 ;
        for ( int i = 0 ; i < input.length() ; i++)
            array1[i] = (int)input[i] - 48 ;
        for ( int i = 0 ; i < input.length() ; i++)
            sum+= array1[i];
        cout << DP(sum) << endl ;
    }
    return 0;
}

int DP(int x)
{
    int sum = 0 ;
    for (  ; x > 0 ; x/=10)
        sum += x%10 ;
    if ( sum >= 10 )
        sum = DP(sum) ;
    return sum ;
}
