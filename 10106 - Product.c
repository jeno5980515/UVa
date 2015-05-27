#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input1 , input2 ;
    int in1[10000] , in2[10000] , out[10000];
    for ( ; cin >> input1 >> input2 ; )
    {
        if ( input1 == "0"  || input2 == "0" )
        {
            cout << 0 << endl ;
            continue ;
        }
        bool get = false ;
        for ( int i = 0 ; i < 10000 ; i ++)
            out[i] = 0 ;
        for ( int i = input1.length()-1 ; i >= 0 ; i -- )
            in1[input1.length()-i-1] = (int)input1[i] - 48 ;
        for ( int i = input2.length()-1 ; i >= 0 ; i -- )
            in2[input2.length()-i-1] = (int)input2[i] - 48 ;
        for ( int i = 0 ; i < input1.length() ; i ++ )
        {
            for ( int j = 0 ; j < input2.length() ; j ++ )
            {
                out[i+j] += in1[i] * in2[j] ;
            }
        }
        for ( int i = 0 ; i < 10000 ; i ++ )
        {
            for ( ; out[i] > 9 ; )
            {
                out[i+1] += 1 ;
                out[i] -= 10 ;
            }
        }
        for ( int i = 10000 - 1 ; i >= 0  ; i -- )
        {
            if ( get == false )
            {
                if ( out[i] != 0 )
                {
                    get = true ;
                    cout << out[i] ;
                }
            }
            else
                cout << out[i]  ;
        }
        cout << endl ;
    }

    return 0;
}
