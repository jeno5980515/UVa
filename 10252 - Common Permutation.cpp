#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 , str2;
    bool s1[30] , s2[30] ;
    int times1[30] , times2[30] , mini ;
    for (  ; getline(cin,str1) ; )
    {
        getline(cin,str2) ;
        for ( int i = 0 ; i < 30 ; i ++)
            s1[i] = false , s2[i] = false , times1[i] = 0 , times2[i] = 0;
        for ( int i = 0 ; i < str1.length() ; i++)
        {
            if ( str1[i] >= 'A' && str1[i] <= 'Z' )
                str1[i] += 32 ;
            s1[int(str1[i]-97)] = true ;
            times1[int(str1[i]-97)] += 1 ;
        }

        for ( int i = 0 ; i < str2.length() ; i++)
        {
            if ( str2[i] >= 'A' && str2[i] <= 'Z' )
                str2[i] += 32 ;
            s2[int(str2[i]-97)] = true ;
            times2[int(str2[i]-97)] += 1 ;
        }
        for ( int i = 0 ; i < 30 ; i++ )
            if ( s1[i] == true )
                if ( s2[i] == true )
                {
                    mini = min(times1[i],times2[i]) ;
                    for ( int j = 0 ; j < mini ; j ++)
                        cout << char(i+97) ;
                }
        cout << endl ;
    }
    return 0;
}
