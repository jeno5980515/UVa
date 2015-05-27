#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number , array1[100] ;
    cin >> number ;
    for ( int n = 0 ; n < number ; n ++)
    {
        int sum = 0 , total ;
        cin >> total ;
        for ( int i = 0 ; i < total ; i++)
            cin >> array1[i] ;
        for ( int i = 0 ; i < total ; i++)
        {
            for ( int j = i-1 ; j >= 0 ; j-- )
            {
                if ( array1[j] > array1[j+1] )
                {
                    int num = array1[j] ;
                    array1[j] = array1[j+1] ;
                    array1[j+1] = num ;
                    sum ++ ;
                }
            }
        }
        cout << "Optimal train swapping takes " << sum << " swaps." << endl ;

    }
    return 0;
}
