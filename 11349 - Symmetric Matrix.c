#include <iostream>

using namespace std;

int main()
{
    long long int number , array1[100][100] ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++)
    {
        int number2 ;
        char a , b ;
        cin >> a >> b >> number2 ;
        for ( int i = 0 ; i < number2 ; i ++)
            for ( int j = 0 ; j < number2 ; j ++ )
                cin >> array1[i][j] ;
        bool same = true ;
        for ( long long int i = 0 ; i < number2 ; i ++)
            for ( long long int j = 0 ; j < number2 ; j ++ )
            {
                if ( array1[i][j] != array1[number2-i-1][number2-j-1] )
                    same = false ;
                if ( array1[i][j] < 0 )
                    same = false ;
            }
        if ( same == true )
            cout << "Test #" << n +1 << ": Symmetric." << endl  ;
        else
            cout << "Test #" << n +1 << ": Non-symmetric."  << endl ;
    }
    return 0;
}
