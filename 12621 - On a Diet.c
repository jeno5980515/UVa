#include <iostream>

using namespace std;

int min1 , min2 , number , number2 , array1[10000] , array2[100000] , arraycount = 0  ;


int dp(int x , int y , int z )
{
    int sum = y , lvl = z ;
    for ( int i = x+1 ; i <= number2 && sum < min1 ; i ++ )
    {
        if ( sum >= min1)
        {
            min2 = min(min2,sum) ;
            return sum  ;
        }
        else
        {
            sum = dp(i,sum+array1[i],lvl);
            sum -= array1[i] ;
            if ( lvl != 0 )
                return sum ;
        }
     }
    if ( sum >= min1)
        min2 = min(min2,sum) ;
    return sum ;


}
int main()
{
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        min2 = 999999 ;
        cin >> min1 >> number2 ;
        for ( int i = 1 ; i <= number2 ; i ++)
            cin >> array1[i] ;
        for ( int i = 1 ; i <= number2 ; i++ )
            for ( int j = number2-1 ; j >= i ; j--)
            {
                if ( array1[j] > array1[j+1] )
                {
                    int num = array1[j] ;
                    array1[j] = array1[j+1] ;
                    array1[j+1] = num ;
                }
            }
        dp(0,0,0) ;
        if ( min2 == 999999)
            cout << "NO SOLUTION" << endl ;
        else
            cout << min2 << endl ;
    }
    return 0;
}
