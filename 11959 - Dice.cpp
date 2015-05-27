#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number , site[6] , count1 , count2;
    bool real, real2 , real3 ;
    string input1 , input2 , cycle = "    " , cycle2 = "        "  ;
    char other  = ' ' ;
    cin >> number ;
    for (int n = 0 ; n < number && cin >> input1 >> input2 ; n++)
    {
        count1 = 0 , count2 = 0;
        real = false , real2 = false , real3 = false;
        for ( int i = 0 ; i < 4 ; i++)
            cycle[i] = input1[i+2] ;
        for ( int i = 0 ; i < 6 ; i++)
            if ( input1[0] == input2[i] )
                site[count2] = i , count2 += 1;
        for ( int c = 0 ; c < count2 ; c ++ )
        {
            real = false , real2 = false ;
            if ( site[c] == 0 )
                for ( int i = 0  ; i < 8 ; i+= 4 )
                    cycle2[i] = input2[2] , cycle2[i+1] = input2[3] , cycle2[i+2] = input2[4] , cycle2[i+3] = input2[5] , other = input2[1];
            else if ( site[c] == 1 )
                for ( int i = 0 ; i < 8 ; i+= 4 )
                    cycle2[i] = input2[2] , cycle2[i+1] = input2[5] , cycle2[i+2] = input2[4] , cycle2[i+3] = input2[3] , other = input2[0];
            else if ( site[c] == 2 )
                for ( int i = 0 ; i < 8 ; i+= 4 )
                    cycle2[i] = input2[1] , cycle2[i+1] = input2[3] , cycle2[i+2] = input2[0] , cycle2[i+3] = input2[5]  , other = input2[4];
            else if ( site[c] == 3 )
                for ( int i = 0  ; i < 8 ; i+= 4 )
                    cycle2[i] = input2[0] , cycle2[i+1] = input2[2] , cycle2[i+2] = input2[1] , cycle2[i+3] = input2[4]  ,other = input2[5];
            else if ( site[c] == 4 )
                for ( int i = 0  ; i < 8 ; i+= 4 )
                    cycle2[i] = input2[0] , cycle2[i+1] = input2[3] , cycle2[i+2] = input2[1] , cycle2[i+3] = input2[5] , other = input2[2];
            else if ( site[c] == 5 )
                for ( int i = 0  ; i < 8 ; i+= 4 )
                    cycle2[i] = input2[0] , cycle2[i+1] = input2[4] , cycle2[i+2] = input2[1] , cycle2[i+3] = input2[2] , other = input2[3];
            for ( int i = 0 ; i < 5 ; i++ )
            {
                if ( cycle2[i] == cycle[0] && cycle2[i+1] == cycle[1] && cycle2[i+2] == cycle[2] && cycle2[i+3] == cycle[3]  )
                    real = true ;
            }
            if ( input1[1] == other )
                real2 = true ;
            if ( real == true && real2 == true )
                real3 = true ;
        }
        if (real3 == true )
            cout << "Equal" << endl ;
        else
            cout << "Not Equal" << endl ;
    }
    return 0;
}


