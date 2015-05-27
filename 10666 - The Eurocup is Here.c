#include <iostream>
#include <string>

using namespace std;

int win(int x, int y)
{
    int sum1 = 0 ;
    if ( x != 0 )
    {
        if ( x % y == 0 )
        {
            sum1 += win(x,y*2) ;
        }
        else
        {
            sum1 ++ ;
            sum1 += win(x-y/2,y*2) ;
        }
    }
    return sum1 ;
}

int lose(int x, int y )
{
    int sum1 = 0 ;
    if ( x % y == 0 )
    {
        sum1 += ( y / 2 );
        sum1 += lose(x,y*2) ;
    }
    return sum1 ;
}

int main()
{
    int number ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        int sum2 = 0 ;
        int N , X ;
        cin >> N >> X ;
        int total = 1 ;
        for ( int i = 0 ; i < N ; i ++ )
            total *= 2 ;
        if ( X == 0 )
            sum2 = 1 ;
        else
            sum2 = total - lose(X,2) ;
        cout << win(X,2) + 1 << " " << sum2 << endl ;
    }
    return 0;
}
