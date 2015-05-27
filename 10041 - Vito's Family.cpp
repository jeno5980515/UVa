#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number , number2 , array[30000] , d[500] , max = 0 , min = 0 , min2 = 0 , min3 = 0 , min4 = 0 ,s ;
    cin >> number ;
    for ( int n = 0 ; n < number && cin >> number2 ; n++ )
    {
        min = 0 , min2 = 0 , min3 = 0 , min4 = 0 ;
        for ( int n2 = 0 ; n2 < number2 ; n2++ )
            cin >> array[n2] ;
        for ( int i = 0 ; i < number2 ; i++)
        {
            for ( int j = 0 ; j < number2 -1 ; j++)
            {
                if ( array[j] >= array[j+1] )
                {
                    s = array[j] ;
                    array[j] = array[j+1];
                    array[j+1] = s ;
                }
            }
        }
        if ( number2 % 2 == 0)
        {
            for ( int i = 0 ; i < number2 ; i ++)
            {
                min2 = (array[(number2)/2]) - array[i] ;
                if ( min2 < 0)
                    min2 *= -1 ;
                min += min2 ;
            }
            for ( int i = 0 ; i < number2 ; i ++)
            {
                min3 = (array[(number2)/2-1]) - array[i] ;
                if ( min3 < 0)
                    min3 *= -1 ;
                min4 += min3 ;
            }
            if ( min > min4)
                min = min4 ;
        }
        else
            for ( int i = 0 ; i < number2 ; i ++)
            {
                min2 = array[(number2-1)/2] - array[i] ;
                if ( min2 < 0)
                    min2 *= -1 ;
                min += min2 ;
            }
        cout << min << endl;

    }
}
