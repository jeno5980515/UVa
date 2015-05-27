#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input , input2 ;
    for ( ; cin >> input >> input2 ; )
    {
        int count = 0 , count2 = 0;
        bool sub  = true , s = true , output = false ;
        for ( int i = 0 ; i < input.length() ; i ++)
        {
            for ( int j = count ; j < input2.length() ; j++ , count ++)
            {
                if (  input[i] == input2[j] )
                {
                    count2 ++ ;
                    sub = true ;
                    count ++ ;
                    break ;
                }
                else
                    sub = false ;
                if ( sub == false && j == input2.length() -1)
                {
                    output = false ;
                    break ;
                }
            }
            if ( sub == true )
                output = true ;
        }
        if ( input.length() > input2.length () || input.length() != count2)
            output = false ;
        if ( output == false )
            cout << "No" << endl ;
        else
            cout << "Yes" << endl ;
    }
    return 0;
}
