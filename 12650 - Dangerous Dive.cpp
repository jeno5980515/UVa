#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int input1 , input2 ;
    int array[10000] ;
    for ( ; cin >> input1 >> input2 ; )
    {
        for ( int i = 0 ; i < input2 ; i ++)
            cin >> array[i] ;
        for ( int i = 1 ; i < input1+1 ; i ++)
        {
            for ( int j = 0 ; j < input2 ; j ++)
            {
                if ( i == array[j] )
                    break ;
                if ( i != array[j] && j == input2 -1)
                    cout << i << " " ;
            }
        }
        if ( input1 == input2 )
        {
            cout << "*" << endl ;
            continue ;
        }
        cout << endl ;
    }

    return 0;
}
