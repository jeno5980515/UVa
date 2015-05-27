#include <iostream>

using namespace std;

int main()
{
    int array1[10000] , max1 = 0 ;
    for ( int i = 0 ; i < 10000 ; i ++ )
        array1[i] = 0 ;
    int first , length , last ;
    for ( ; cin >> first >> length >> last && !cin.eof() ; )
    {
        for ( int i = first ; i < last ; i ++ )
            array1[i] = max(array1[i],length) ;
        max1 = max(max1,last) ;
    }
    int site = -1 ;
    for ( int i = 1 ; i <= max1 ; i ++ )
    {
        if ( array1[i] != array1[i-1] || i == max1 )
        {
            if ( i == max1 )
            {
                cout << site << " " << array1[site] << " " << i <<  " " << 0 << endl ;
                break ;
            }
            if ( site != -1 )
            {
                cout << site << " " << array1[site] << " " ;
            }
            site = i ;
        }

    }
    return 0;
}
