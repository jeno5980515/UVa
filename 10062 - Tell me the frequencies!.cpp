#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input  ;
    int count[10000] , array[10000]  ;
    for (int n = 0 ; getline(cin,input) ; n++ )
    {
        if ( n != 0 )
            cout << endl ;
        for ( int i = 0 ; i < 1000 ; i ++)
            count[i] = 0 ;
        for ( int i = 0 ; i < input.length() ; i ++)
            count[(int)input[i]] += 1 ;
        for ( int i = 1 ; i <= input.length() ; i ++)
        {
            for ( int j = 999 ; j >= 0 ; j --)
                if ( count[j] == i )
                    cout << j << " "<<count[j] << endl ;
        }
    }
    return 0 ;
}
