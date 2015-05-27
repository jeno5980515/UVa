#include <iostream>

using namespace std;

int main()
{
    int n ;
    for ( ; cin >> n ; )
    {
        int emptybottle = n , fullbottle = 0 , sum = n ;
        if ( n == 2 )
            emptybottle = 3 , fullbottle = 0 , sum = 2 ;
        for ( ; emptybottle >= 3 ; )
        {
            fullbottle = emptybottle / 3 ;
            emptybottle = emptybottle % 3 ;
            sum += fullbottle ;
            emptybottle += fullbottle ;
            fullbottle = 0 ;
            if ( fullbottle == 0 && emptybottle != 1 && emptybottle < 3  )
            {
                sum = n  ;
                emptybottle = n + 1 ;
                fullbottle = 0 ;
            }
        }
        cout << sum << endl ;
    }
    return 0;
}
