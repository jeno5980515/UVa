#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int number , array1[80000] ;
    array1[0] = 1 ;
    for ( int i = 1 ; i < 80000 ; i++ )
    {
        array1[i] = array1[i-1] + i ;
    }
    for ( ; cin >> number ; )
    {
        long long int lvl , left , right ;
        for ( int i = 0 ; i < 80000 ; i++ )
        {
            if ( number >= array1[i] && number < array1[i+1] )
            {
                lvl = i + 1 ;
                break ;
            }
        }
        left = array1[lvl-1] , right = array1[lvl] -1 ;
        long long int site = number - left , site2 = right - number ;
        cout << "TERM " << number << " IS " ;
        if ( lvl % 2 == 1 )
            cout << lvl - site << "/" << lvl - site2 << endl ;
        else
            cout << lvl - site2 << "/" << lvl - site << endl ;
    }
    return 0;
}
