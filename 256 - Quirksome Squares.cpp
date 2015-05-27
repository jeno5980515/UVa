#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
    long int number , array1[100000] , array2[100000] ,count1 , lvl ;
    for ( int i = 0 ; i < 100000 ; i ++)
        array1[i] = i*i ;
    for ( ; cin >> number ; )
    {
        count1 = 0 , lvl = 0;
        int number2 = 1 ;
        for ( int i = 0 ; i < number ; i++)
            number2 *= 10 ;
        for ( int i = 0 ; array1[i] < number2 ; i++)
        {
            int n1 = 0 , n2 = 0 ;
            int number3 = 1 ;
            for ( int j = 0  ; j < number/2; j++ )
                number3 *= 10 ;
            n1 = array1[i] / number3 ;
            n2 = array1[i] % number3 ;
            if ( (n1 + n2)*(n1 + n2) == array1[i] )
                array2[count1] = array1[i] , count1 ++ ;
        }
        for ( int i = 0 ; i < count1 ; i++)
        {
            if ( array2[i] == 0000000)
            {
                for ( int j = 0 ; j < number-1 ; j++)
                    cout << 0 ;
            }
            else if ( array2[i] < number2 )
            {
                lvl = 0 ;
                for ( int j = array2[i] ; j > 0 ; j/=10)
                    lvl ++ ;
                for ( int j = 0 ; j < number - lvl ; j++)
                    cout << 0 ;
            }
            cout << array2[i] << endl ;
        }

    }
    return 0 ;
}
