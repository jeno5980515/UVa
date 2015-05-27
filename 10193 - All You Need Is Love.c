#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number ;
    cin >> number ;
    string s1 , s2 ;
    int sum1 , sum2 ;
    for ( int n = 0 ; n < number ; n++ )
    {
        sum1 = 0 , sum2 = 0 ;
        cin >> s1 >> s2 ;
        for ( int i = 0 ; i < s1.length() ; i ++ )
        {
            int lvl = 1 ;
            for ( int j = i ; j < s1.length() -1 ; j ++)
                lvl *= 2 ;
            sum1 += ((int)s1[i] - 48) * lvl ;
        }
        for ( int i = 0 ; i < s2.length() ; i ++ )
        {
            int lvl = 1 ;
            for ( int j = i ; j < s2.length() -1 ; j ++)
                lvl *= 2 ;
            sum2 += ((int)s2[i] - 48) * lvl ;
        }
        if ( sum2 < sum1 )
        {
            int num = sum2 ;
            sum2 = sum1 ;
            sum1 = num ;
        }
        for ( int i = 0 ; sum1 > 1; i ++ )
        {
            for ( ; sum2 >= sum1 ; )
            {
                sum2 -= sum1;
            }
            int num = sum2 ;
            sum2 = sum1 ;
            sum1 = num ;
        }
        if ( sum1 == 0 )
            cout << "Pair #" << n+1 << ": All you need is love!" << endl;
        else
            cout << "Pair #" << n+1 << ": Love is not all you need!" << endl;

    }
}
