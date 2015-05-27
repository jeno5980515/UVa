#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number ;
    cin >> number ;
    cin.ignore() ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        string blank ;
        getline(cin,blank) ;
        if ( n > 0 )
            cout << endl ;
        string array1[100] ;
        int x , y , array2[100] ;
        for ( int i = 0 ; i < 100 ; i ++ )
            array2[i] = 0 ;
        cin >> x >> y ;
        cin.ignore();
        for ( int i = 0 ; i < y ; i ++ )
            getline(cin,array1[i]) ;
        for ( int i = 0 ; i < y ; i ++ )
        {
            string s = array1[i] ;
            for ( int j = 0 ; j < s.length() - 1  ; j ++ )
            {
                for ( int k = 0 ; k < s.length() - 1 ; k ++ )
                {
                    if ( s[k] > s[k+1] )
                    {
                        char s2 = s[k] ;
                        s[k] = s[k+1] ;
                        s[k+1] = s2 ;
                        array2[i] ++ ;
                    }
                }
            }
        }
        for ( int i = 0 ; i < y ; i ++ )
        {
            for ( int j = 0 ; j < y - 1 ; j ++ )
            {
                if ( array2[j] > array2[j+1] )
                {
                    int num = array2[j] ;
                    array2[j] = array2[j+1] ;
                    array2[j+1] = num ;
                    string s = array1[j] ;
                    array1[j] = array1[j+1] ;
                    array1[j+1] = s ;
                }
            }
        }
        for ( int i = 0 ; i < y ; i ++ )
            cout << array1[i] << endl ;
    }
    return 0;
}
