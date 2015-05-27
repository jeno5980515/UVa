#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number ;
    for ( ; cin >> number && number != 0 ; )
    {
        bool out = false ;
        long long int maxx1 = -9999999 , minx2 = 9999999 , maxy1 = -9999999 , miny2 = 9999999 , maxz1 = -9999999 , minz2 = 9999999 ;
        for ( int n = 0 ; n < number ; n ++ )
        {
            long long int  x , y , z , length ;
            cin >> x >> y >> z >> length ;
            maxx1 = max(x,maxx1) ;
            minx2 = min(x+length,minx2) ;
            maxy1 = max(y,maxy1) ;
            miny2 = min(y+length,miny2) ;
            maxz1 = max(z,maxz1) ;
            minz2 = min(z+length,minz2) ;
        }
        long long int result = ( minx2 - maxx1 ) * ( miny2 - maxy1 ) * ( minz2 - maxz1 ) ;
        if ( result < 0 )
            cout << 0 << endl ;
        else
        {
            cout << result << endl ;
        }
    }

    return 0;
}
