#include <iostream>
#include <string>
#include <math.h>
#include<iomanip>

using namespace std;

int main()
{
    int number , count[200] , max = 0 ;
    char array[200] ;
    string input;
    cin >> number ;
    cin.ignore();
    for ( int n = 0 ;  n < number && getline(cin,input)  ; n++ )
    {
        max = 0 ;
        for ( int i = 0 ; i < 200 ; i ++  )
            count[i] = 0 ;
        for ( int i = 97 , j = 0 ; i <= 122 ; i ++ , j ++ )
            array[j] = (char)i ;
        for ( int i = 65 , j = 26 ; i <= 90 ; i ++ , j ++ )
            array[j] = (char)i ;
        for ( int j = 0  ; j < input.length() ; j++)
        {
            for ( int i = 97 ; i <= 122 ; i ++ )
            {
                if ( input[j] == array[i-97] || input[j] == array[i-97+26])
                {
                    count[i-97] += 1 ;
                }
            }

        }
        for ( int i = 0 ; i < 200 ; i ++)
        {
            if ( count[i] >= max )
                max = count[i] ;
        }
        for ( int i = 0 ; i <=26 ; i ++)
        {
            if (count[i] == max )
                cout << array[i] ;
        }
            cout << endl;
    }

    return 0;
}
