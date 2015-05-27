#include <iostream>
#include <string>
#include <math.h>
#include<iomanip>

using namespace std;

int main()
{
    string input ;
    int number ;
    for (  ;  getline(cin,input)  ;  )
    {
        int count = 0 , now = 0 ;
        for ( int i = 0 ; i < input.length() ; i ++)
        {
            if ( input[i] >= 65 && input[i] <= 122)
            {
                for ( int j = i ; j < input.length() ; j++)
                {
                    if ( input[j] < 65 || input[j] >122)
                    {
                        count+=1 ;
                        i = j ;
                        break ;
                    }
                }
            }
        }
        cout << count << endl ;
    }
    return 0;
}
