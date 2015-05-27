#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int number , array1[70000] ;
    for ( ; cin >> number ; )
    {
        for ( int i = 0 ; i < 70000 ; i ++ )
            array1[i] = 0 ;
        for ( int n = 0 ; n < number ; n ++ )
        {
            int input ;
            cin >> input ;
            array1[input] ++ ;
        }
        int mid ;
        if ( number % 2 == 1 )
            mid = ( number - 1 ) / 2 ;
        else
            mid = number / 2 - 1 ;
        int sum1 = 0 , sum2 = 0 , mid1 = 0 , mid2 = 0 , sum = 0 ;
        bool getfirst = false , getsecond = false ;
        for ( int i = 0 ; i < 70000 ; i ++)
        {
            sum += array1[i] ;
            if ( sum >= mid + 1 && getfirst == false )
            {
                mid1 = i ;
                getfirst = true ;
            }
            if ( getfirst == true && sum >= mid + 2 )
            {
                if ( array1[i] != 0 )
                {
                    mid2 = i ;
                    getsecond = true ;
                }
            }
            if ( getsecond == true )
                break ;
        }
        if ( number % 2 == 1 )
            cout << mid1 << " " << array1[mid1] << " " ;
        else if ( number % 2 == 0)
        {
            if ( mid1 == mid2 )
                cout << mid1 << " " << array1[mid1] << " " ;
            else
                cout << mid1 << " " << array1[mid1] + array1[mid2] << " " ;
        }
        if ( number % 2 == 1)
            cout << 1 << endl ;
        else
            cout << mid2 - mid1 + 1 << endl ;
    }
    return 0;
}
