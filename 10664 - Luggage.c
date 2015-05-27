#include <iostream>
#include <sstream>

using namespace std;

int array1[200] , amount , sum = 0 ;
bool array2[200] , getaverage = false ;

int findaverage(int x)
{
    if ( x == sum / 2 )
        getaverage = true ;
    int sum2 = 0 ;
    if ( getaverage == true || x > sum / 2  )
        return sum2 ;
    for ( int i = 0 ; i < amount ; i ++ )
    {
        if ( array2[i] == false )
        {
            array2[i] = true ;
            sum2 = findaverage(array1[i]+x) ;
            array2[i] = false ;
        }
    }
    return sum2 ;
}

int main()
{
    int number ;
    cin >> number ;
    cin.ignore() ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        sum = 0 ;
        getaverage = false ;
        for ( int i = 0 ; i < 200 ; i ++ )
            array2[i] = false ;
        stringstream ss ;
        string input ;
        getline(cin,input) ;
        ss << input << "-1" ;
        int n2 ;
        for ( int i = 0 ; i < 200 ; i ++ )
        {
            ss >> n2 ;
            array1[i] = n2 ;
            if ( n2 == -1 )
                break ;
            sum += n2 ;
            amount = i ;
        }
        if ( sum % 2 == 0 )
        {
            findaverage(0) ;
            if ( getaverage == true )
                cout << "YES" << endl ;
            else
                cout << "NO" << endl ;
        }
        else
            cout << "NO" << endl ;
    }
    return 0;
}
