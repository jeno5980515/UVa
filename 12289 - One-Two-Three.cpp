#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number ;
    string str , one = "one" , two = "two" , three = "three";
    cin >> number ;
    cin.ignore() ;
    int count1 , count2 ;
    for ( int i = 0 ; i < number && getline(cin,str)  ; i ++)
    {
        count1= 0 , count2 = 0 ;
        for ( int i = 0 ; i < 3 ; i++ )
        {
            if ( str[i] == one[i] )
                count1 ++ ;
            if ( str[i] == two[i] )
                count2 ++ ;
        }
        if ( str.length() == 5 )
            cout << "3" << endl ;
        else if ( count1 > count2)
            cout << "1" << endl ;
        else
            cout << "2" << endl ;
    }
    return 0;
}
