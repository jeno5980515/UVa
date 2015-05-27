#include <iostream>

using namespace std;

bool div(int *in , int number , int lvl )
{
    int remain = 0 ;
    for ( int i = 0 ; i < lvl ; i++)
    {
        remain = remain*10 + in[i] ;
        if ( remain >= number )
        {
            remain %= number ;
        }
    }
    if ( remain == 0)
        return true ;
    else
        return false ;
}

int main()
{
    string input ;
    for ( int n = 0 ; cin >> input ; n++ )
    {
        if ( n != 0)
            cout << endl ;
        int level = 0 ;
        bool leap = false , leap2 = false , leap3 = false , bulu = false , hulu = false ;
        int inputarray[10000] , outputarray[10000] ;
        for ( int i = 0 ; i < input.length() ; i ++ , level ++ )
            inputarray[i] = (int)input[i] - 48 ;
        leap = div(inputarray,4,level) ;
        leap2 = div(inputarray,100,level) ;
        leap3 = div(inputarray,400,level) ;
        bulu = div(inputarray,55,level) ;
        hulu = div(inputarray,15,level) ;
        if ( leap3 == true )
            leap = true ;
        else if ( leap3 == false && leap2 == true )
            leap = false ;
        if ( leap != true )
            bulu = false ;
        if ( leap == true)
            cout << "This is leap year." << endl ;
        if ( hulu == true )
            cout << "This is huluculu festival year." << endl ;
        if ( bulu == true )
            cout << "This is bulukulu festival year." << endl ;
        if ( leap == false && hulu == false && bulu == false )
            cout << "This is an ordinary year." << endl ;

    }
    return 0;
}


