#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
    int number , array1[13] , array2[13] , sum , lvl;
    cin >> number ;
    string input1 , op , input2 ;
    for (int n = 0 ; n < number && cin >> input1 >> op >> input2 ; n++ )
    {
        sum = 0 ;
        for ( int i = 0 ; i < 13 ; i++)
            array1[i] = 0 , array2[i] = 0 ;
        for ( int i = 0 ; i < input1.length()*4 ; i+=4 )
        {
            if ( input1[input1.length()-i/4-1] == '0')
                array1[i] = 0 , array1[i+1] = 0 , array1[i+2] = 0 , array1[i+3] = 0 ;
            else if ( input1[input1.length()-i/4-1] == '1')
                array1[i] = 1 , array1[i+1] = 0 , array1[i+2] = 0 , array1[i+3] = 0 ;
            else if ( input1[input1.length()-i/4-1] == '2')
                array1[i] = 0 , array1[i+1] = 1 , array1[i+2] = 0 , array1[i+3] = 0 ;
            else if ( input1[input1.length()-i/4-1] == '3')
                array1[i] = 1 , array1[i+1] = 1 , array1[i+2] = 0 , array1[i+3] = 0 ;
            else if ( input1[input1.length()-i/4-1] == '4')
                array1[i] = 0 , array1[i+1] = 0 , array1[i+2] = 1 , array1[i+3] = 0 ;
            else if ( input1[input1.length()-i/4-1] == '5')
                array1[i] = 1 , array1[i+1] = 0 , array1[i+2] = 1 , array1[i+3] = 0 ;
            else if ( input1[input1.length()-i/4-1] == '6')
                array1[i] = 0 , array1[i+1] = 1 , array1[i+2] = 1 , array1[i+3] = 0 ;
            else if ( input1[input1.length()-i/4-1] == '7')
                array1[i] = 1 , array1[i+1] = 1 , array1[i+2] = 1 , array1[i+3] = 0 ;
            else if ( input1[input1.length()-i/4-1] == '8')
                array1[i] = 0 , array1[i+1] = 0 , array1[i+2] = 0 , array1[i+3] = 1 ;
            else if ( input1[input1.length()-i/4-1] == '9')
                array1[i] = 1 , array1[i+1] = 0 , array1[i+2] = 0 , array1[i+3] = 1 ;
            else if ( input1[input1.length()-i/4-1] == 'A')
                array1[i] = 0 , array1[i+1] = 1 , array1[i+2] = 0 , array1[i+3] = 1 ;
            else if ( input1[input1.length()-i/4-1] == 'B')
                array1[i] = 1 , array1[i+1] = 1 , array1[i+2] = 0 , array1[i+3] = 1 ;
            else if ( input1[input1.length()-i/4-1] == 'C')
                array1[i] = 0 , array1[i+1] = 0 , array1[i+2] = 1 , array1[i+3] = 1 ;
            else if ( input1[input1.length()-i/4-1] == 'D')
                array1[i] = 1 , array1[i+1] = 0 , array1[i+2] = 1 , array1[i+3] = 1 ;
            else if ( input1[input1.length()-i/4-1] == 'E')
                array1[i] = 0 , array1[i+1] = 1 , array1[i+2] = 1 , array1[i+3] = 1 ;
            else if ( input1[input1.length()-i/4-1] == 'F')
                array1[i] = 1 , array1[i+1] = 1 , array1[i+2] = 1 , array1[i+3] = 1 ;
        }
        for ( int i = 0 ; i < input2.length()*4 ; i+=4 )
        {
            if ( input2[input2.length()-i/4-1] == '0')
                array2[i] = 0 , array2[i+1] = 0 , array2[i+2] = 0 , array2[i+3] = 0 ;
            else if ( input2[input2.length()-i/4-1] == '1')
                array2[i] = 1 , array2[i+1] = 0 , array2[i+2] = 0 , array2[i+3] = 0 ;
            else if ( input2[input2.length()-i/4-1] == '2')
                array2[i] = 0 , array2[i+1] = 1 , array2[i+2] = 0 , array2[i+3] = 0 ;
            else if ( input2[input2.length()-i/4-1] == '3')
                array2[i] = 1 , array2[i+1] = 1 , array2[i+2] = 0 , array2[i+3] = 0 ;
            else if ( input2[input2.length()-i/4-1] == '4')
                array2[i] = 0 , array2[i+1] = 0 , array2[i+2] = 1 , array2[i+3] = 0 ;
            else if ( input2[input2.length()-i/4-1] == '5')
                array2[i] = 1 , array2[i+1] = 0 , array2[i+2] = 1 , array2[i+3] = 0 ;
            else if ( input2[input2.length()-i/4-1] == '6')
                array2[i] = 0 , array2[i+1] = 1 , array2[i+2] = 1 , array2[i+3] = 0 ;
            else if ( input2[input2.length()-i/4-1] == '7')
                array2[i] = 1 , array2[i+1] = 1 , array2[i+2] = 1 , array2[i+3] = 0 ;
            else if ( input2[input2.length()-i/4-1] == '8')
                array2[i] = 0 , array2[i+1] = 0 , array2[i+2] = 0 , array2[i+3] = 1 ;
            else if ( input2[input2.length()-i/4-1] == '9')
                array2[i] = 1 , array2[i+1] = 0 , array2[i+2] = 0 , array2[i+3] = 1 ;
            else if ( input2[input2.length()-i/4-1] == 'A')
                array2[i] = 0 , array2[i+1] = 1 , array2[i+2] = 0 , array2[i+3] = 1 ;
            else if ( input2[input2.length()-i/4-1] == 'B')
                array2[i] = 1 , array2[i+1] = 1 , array2[i+2] = 0 , array2[i+3] = 1 ;
            else if ( input2[input2.length()-i/4-1] == 'C')
                array2[i] = 0 , array2[i+1] = 0 , array2[i+2] = 1 , array2[i+3] = 1 ;
            else if ( input2[input2.length()-i/4-1] == 'D')
                array2[i] = 1 , array2[i+1] = 0 , array2[i+2] = 1 , array2[i+3] = 1 ;
            else if ( input2[input2.length()-i/4-1] == 'E')
                array2[i] = 0 , array2[i+1] = 1 , array2[i+2] = 1 , array2[i+3] = 1 ;
            else if ( input2[input2.length()-i/4-1] == 'F')
                array2[i] = 1 , array2[i+1] = 1 , array2[i+2] = 1 , array2[i+3] = 1 ;
        }
        for ( int i = 12 ; i >= 0 ; i--)
            cout << array1[i] ;
        cout << " " << op << " " ;
        for ( int i = 12 ; i >= 0 ; i--)
            cout << array2[i] ;
        if ( op == "-" )
        {
            for ( int i = 0 ; i < 13 ; i++ )
            {
                if ( array2[i] == 1 )
                    array2[i] = 0 ;
                else
                    array2[i] = 1 ;
            }
            array2[0] += 1 ;
            for ( int i = 0 ; i < 13 ; i ++)
            {
                if ( array2[i] > 1)
                {
                    array2[i] -= 2 ;
                    array2[i+1] += 1 ;
                }
            }
        }
        for ( int i = 0 ; i < 13 ; i ++)
        {
            array1[i] += array2[i] ;
            if ( array1[i] > 1 )
            {
                array1[i] -= 2 ;
                array1[i+1] += 1 ;
            }
        }
        for ( int i = 0 ; i < 13 ; i++)
        {
            lvl = 1 ;
            for ( int j = 0 ; j < i ; j ++)
                lvl *= 2 ;
            sum += array1[i]*lvl ;
        }
        cout << " = " << sum << endl ;
    }
    return 0 ;
}
