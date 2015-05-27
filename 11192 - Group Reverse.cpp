#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n , m , s ,count = 0;
    string input , output;
    for ( ; cin >> n && n!= 0 ; count = 0)
    {
        cin >> input ;
        m = input.length()/n ;
        s = m ;
        for ( int j = 0 ;  j < input.length() ; j++ , count ++)
        {
            if ( j%m == 0 && j != 0)
            {
                count = 0 ;
                m+=s;
            }
            cout << input[m-count-1] ;
        }
        cout << endl;

    }
    return 0;
}
