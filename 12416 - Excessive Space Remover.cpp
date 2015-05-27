#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{

    int count1 = 0 , sum = 0 , max1 = 0;
    string input ;
    for ( ;getline(cin,input) ; )
    {
        count1 = 0 , max1 = 0 , sum = 0;
        for (int i = 0 ; i < input.length() ; i++ )
        {
            if ( input[i] == ' ')
                count1 ++ ;
            else
            {
                max1 = max(count1,max1) ;
                count1 = 0 ;
            }
        }
        for ( int i = max1 ; i > 1 ; i = (i%2 + i/2) )
            sum++;
        cout << sum << endl ;
    }
    return 0;
}
