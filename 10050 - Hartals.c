#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number , countarray[1000];
    cin >> number ;
    for ( int n = 0 ; n < number ; n++)
    {
        int day , party , partyarray[105] , count1 = 0 ;
        bool dayarray[4000] ;
        cin >> day >> party ;
        for ( int i = 0 ; i < 4000 ; i++ )
            dayarray[i] = false ;
        for ( int i = 0 ; i < 105 ; i++ )
            partyarray[i] = 0 ;
        for ( int i = 0 ; i < party ; i++)
            cin >> partyarray[i] ;
        for ( int i = 0 ; i < day ; i ++ )
        {
            if (  i%7 != 5 && i%7 != 6  )
                for ( int j = 0 ; j < party ; j++)
                {
                    if ( i % partyarray[j] == partyarray[j] - 1)
                        dayarray[i] = true ;
                }
        }
        for ( int i = 0 ; i < day ; i ++)
            if (dayarray[i] == true)
                count1 ++ ;
        countarray[n] = count1;

    }
    for ( int i = 0 ; i < number ; i++)
        cout << countarray[i] << endl ;
    return 0;

}





