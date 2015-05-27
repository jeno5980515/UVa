#include <iostream>
#include <string>
#include <math.h>
#include<iomanip>

using namespace std;

int main()
{
    string input ;
    long long int array[1000] , m , s , count;
    for ( ; cin >> input && input[0] != '-' ; )
    {
        m = 0 ,s = 0 , count = 0;
        if ( input[1] == 'x' )
        {
            for ( int i = 2 ; i < input.length() ; i++)
            {
                if ( input[i] >= 'a' && input[i] <= 'z' )
                    input[i] -= 32 ;
                if ( input[i] >= '0' && input[i] <= '9')
                    m+=  int(input[i]-48)* pow(16,input.length()-i-1) ;
                else if ( input[i] >= 'A' && input[i] <= 'F')
                    m+=  int(input[i]-55)* pow(16,input.length()-i-1) ;
            }
            cout << m <<endl ;
        }
        else
        {
            cout << "0x" ;
            for ( int i = 0 ; i < input.length() ; i ++)
            {
                int ten = 1 ;
                for ( int j = 0 ; j <input.length()-i-1 ; j++ )
                    ten*=10;
                s += int(input[i]-48) * ten ;
            }
            for ( int i = 0 ; s > 0 ; i ++)
            {
                array[i] = s%16 ;
                s /= 16 ;
                count ++ ;
            }
            for ( int i = count-1 ; i >= 0 ; i --)
            {
                if ( array[i] == 10)
                    cout << 'A' ;
                else if ( array[i] == 11)
                    cout << 'B' ;
                else if ( array[i] == 12)
                    cout << 'C' ;
                else if ( array[i] == 13)
                    cout << 'D' ;
                else if ( array[i] == 14)
                    cout << 'E' ;
                else if ( array[i] == 15)
                    cout << 'F' ;
                else
                    cout << array[i] ;
            }
            cout <<endl ;
        }
    }
    return 0;
}
