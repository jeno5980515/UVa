#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number , input  ;
    int countarray[10000] ;
    cin >> number ;
    for ( int n = 0 ; n < number*2 && cin >> input ; n += 2)
    {
        int sum = 0 ;
        for ( int i = input ; i > 0 ; i /= 2 )
            if ( i % 2 == 1 )
                countarray[n] ++ ;
        for ( int i = input , j = 0 ; i > 0 ; i/= 10 , j ++)
        {
            int s = 1 ;
            for ( int k = 0 ; k < j ; k++)
                s *= 16 ;
            sum += i%10 * s ;
        }
        for ( int i = sum ; i > 0 ; i /= 2 )
            if ( i % 2 == 1 )
                countarray[n+1] ++ ;
    }
    for ( int i = 0 ; i < number*2 ; i += 2 )
        cout << countarray[i] << " " << countarray[i+1] << endl ;
    return 0;

}





