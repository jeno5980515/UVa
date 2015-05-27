#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
    long long int number , array1[10] , input , count1 , prime[10] , array2[10000] , count2 , n2;
    cin >> number ;
    bool real ;
    prime[0] = 2 , prime[1] = 3 , prime[2] = 5 , prime[3] = 7 ;
    for (int n = 0 ; n < number && cin >> input ; n++ )
    {
        if ( input > 0 && input < 10)
        {
            cout << input << endl ;
            continue ;
        }
        else if ( input == 0 )
        {
            cout << 10 << endl ;
            continue ;
        }
        for ( int i = 0 ; i < 10 ; i++)
            array1[i] = 0 ;
        count1 = 0 , real = true , count2 = 0;
        for ( int i = 0 ; i < 4 ; i++)
        {
            for ( ; input % prime[i] == 0 ;)
            {
                input /= prime[i] ;
                array1[i] ++;
            }
        }
        if ( input > 1 )
        {
            cout << -1 << endl ;
            continue ;
        }
        else
        {
            for ( ; array1[0] > 2 ;)
            {
                if ( array1[0] > 2)
                {
                    array2[count2] = 8 ;
                    count2 ++ ;
                    array1[0] -= 3 ;
                }
            }
            for ( ; array1[1] > 1 ;)
            {
                if ( array1[1] > 1)
                {
                    array2[count2] = 9 ;
                    count2 ++ ;
                    array1[1] -= 2 ;
                }
            }
            for ( ; array1[2] > 0 ;)
            {
                array2[count2] = 5 ;
                count2 ++ ;
                array1[2] -= 1 ;
            }
            for ( ; array1[3] > 0 ;)
            {
                array2[count2] = 7 ;
                count2 ++ ;
                array1[3] -= 1 ;
            }
            if ( array1[0] == 2 && array1[1] == 1 )
            {
                array2[count2] = 2 , array2[count2+1] = 6 ;
                count2 += 2 ;
            }
            else if ( array1[0] == 1 && array1[1] == 1 )
            {
                array2[count2] = 6  ;
                count2 += 1 ;
            }
            else if ( array1[0] == 2 && array1[1] == 0 )
            {
                array2[count2] = 4 ;
                count2 += 1 ;
            }
            else if ( array1[0] == 1 && array1[1] == 0 )
            {
                array2[count2] = 2 ;
                count2 += 1 ;
            }
            else if ( array1[0] == 0 && array1[1] == 1 )
            {
                array2[count2] = 3 ;
                count2 += 1 ;
            }
        }
        for ( int i = count2-1 ; i > 0 ; i --)
        {
            for ( int j = 0 ; j <= i-1 ; j++)
            {
                if ( array2[j] > array2[j+1])
                {
                    n2 = array2[j] ;
                    array2[j] = array2[j+1] ;
                    array2[j+1] = n2 ;
                }
            }
        }
        for ( int i = 0 ; i < count2 ; i++)
            cout << array2[i] ;
        cout << endl ;
    }
    return 0 ;
}
