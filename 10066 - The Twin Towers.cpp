#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number1 , number2  ;
    for ( int n = 1 ; cin >> number1 >> number2 && !(number1 == 0 && number2 ==0) ; n ++ )
    {
        char from[105][105] ;
        int array1[105] , array2[105] , output[105] ,  count1[105][105] ;
        for ( int i = 1 ; i <= number1 ; i ++ )
            cin >> array1[i] ;
        for ( int i = 1 ; i <= number2 ; i ++)
            cin >> array2[i] ;
        for ( int i = 0 ; i < 105 ; i ++)
            for ( int j = 0 ; j < 105 ; j ++)
                from[i][j] = ' ' ;
        for ( int i = 0 ; i < 105 ; i ++)
            for ( int j = 0 ; j < 105 ; j ++)
                count1[i][j] = 0 ;
        for ( int i = 1 ; i <= number1 ; i ++)
        {
            for ( int j = 1 ; j <= number2 ; j ++ )
            {
                if ( array1[i] == array2[j] )
                {
                    from[i][j] = 'm' ;
                    count1[i][j] = count1[i-1][j-1] +1 ;

                }
                else if ( count1[i-1][j] < count1[i][j-1])
                {
                    from[i][j] = 'l' ;
                    count1[i][j] = count1[i][j-1] ;
                }
                else
                {
                    from[i][j] = 'u' ;
                    count1[i][j] = count1[i-1][j] ;
                }
            }
        }
        cout << "Twin Towers #"  << n << endl  ;
        cout << "Number of Tiles : "  << count1[number1][number2] << endl << endl ;

    }
    return 0 ;
}

