#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    string str1,str2 ;
    int s1[10000] , s2[10000] , sum[10000] ;
    for ( ; cin >> str1 >> str2 ; )
    {
        int site = 0 ;
        for ( int i = 0 ; i < 10000 ;i ++)
            s1[i] = 0 , s2[i] = 0 , sum[i] = 0;
        for ( int i = 0 ; i < str1.length() ; i++ )
            s1[str1.length()-i-1] = int(str1[i]-48) ;
        for ( int i = 0 ; i < str2.length() ; i++ )
            s2[str2.length()-i-1] = int(str2[i]-48) ;
        for ( int i = 0 ; i < str2.length() ; i++)
        {
            for ( int j = 0 ; j < str1.length() ; j ++ )
            {
                sum[j+i] += s1[j]*s2[i] ;
                for ( ; sum[i+j] >= 10 ;)
                {
                    sum[i+j+1] += 1 ;
                    sum[i+j] -= 10 ;
                }
            }
        }
        for ( int i = 9999 ; i >=0 ; i -- )
        {
            if ( sum[i] != 0)
            {
                site = i  ;
                break ;
            }
        }
        for ( int i = site ; i >= 0  ; i --)
        {
            cout << sum[i] ;
        }
        cout << endl ;


    }
    return 0;
}
