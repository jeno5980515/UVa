#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input ;
    int array1[40000] , array2[40000] ;
    for ( ; getline(cin,input) && input != "0" ; )
    {
        for ( int i = 0 ; i < 40000 ; i ++ )
            array1[i] = 0 , array2[i] = 0 ;
        bool get = false ;
        long long int n = 0 , sum = 0 , lvl = 0 ;
        string s = "" ;
        for ( int i = 0 ; i < input.length() ; i ++ )
        {
            if ( input[i] == ' ' || i == input.length() - 1 )
            {
                if ( n % 2 == 0 && i != input.length() - 1 )
                {
                    for ( int j = 0 ; j < s.length() ; j ++ )
                    {
                        int lvl2 = 1 ;
                        for ( int k = j ; k < s.length() - 1 ; k ++ )
                        {
                            lvl2 *= 10 ;
                        }
                        sum += ((int)s[j] - 48) * lvl2 ;
                    }
                }
                else if ( n % 2 == 1 || i == input.length() - 1 )
                {
                    if ( i == input.length() - 1 )
                        s += input[i] ;
                    for ( int j = 0 ; j < s.length() ; j ++ )
                    {
                        int lvl2 = 1 ;
                        for ( int k = j ; k < s.length() - 1 ; k ++ )
                        {
                            lvl2 *= 10 ;
                        }
                        lvl += ((int)s[j] - 48) * lvl2 ;
                    }
                    array1[sum] = lvl ;
                    sum = 0 ;
                    lvl = 0 ;
                }
                s = "" ;
                n ++ ;
            }
            else
                s += input[i] ;
        }
        sum = 1 ;
        for ( int i = 0 ; i < 40000 ; i ++ )
        {
            if ( array1[i] != 0 )
            {
                long long int lvl = 1 ;
                for ( int j = 0 ; j < array1[i] ; j ++ )
                    lvl *= i ;
                sum *= lvl ;
            }
        }
        for ( int i = sum - 1 , j = 2 ; i > 1 ; )
        {
            if ( i % j == 0 )
            {
                array2[j] ++ ;
                i /= j ;
            }
            else
            {
                j ++ ;
            }
        }
        bool first = false ;
        for ( int i = 39999 ; i >= 0 ; i --)
        {
            if ( array2[i] != 0 )
            {
                if ( first == true )
                    cout << " " ;
                cout << i << " " << array2[i] ;
                first = true ;
            }
        }
        cout << endl ;
    }
    return 0;
}
