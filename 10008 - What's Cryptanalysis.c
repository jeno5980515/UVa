#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number , maxi;
    cin >> number ;
    string input[500] ;
    cin.ignore();
    for ( int n = 0 ; n < number && getline(cin,input[n]) ; n++);
    int countarray[30] ;
    for ( int i = 0 ; i < 30 ; i ++)
        countarray[i] = 0 ;
    for (int i = 0 ; i < number ; i++)
    {
        for ( int j = 0 ; j < input[i].length() ; j ++)
        {
            if ( input[i][j] >= 'A' && input[i][j] <= 'Z' )
                input[i][j] += 32 ;
            countarray[(int)input[i][j]-97] ++ ;
        }
    }
    for ( int i = 0 ; i < 30 ; i ++ )
        maxi = max(maxi , countarray[i]) ;
    for ( int i = maxi ; i > 0 ; i --)
    {
        for ( int j = 0 ; j < 30 ; j ++)
            if ( countarray[j] == i )
                cout << (char)(j+65) << " " << i << endl ;
    }
    return 0;

}





