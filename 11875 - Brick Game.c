#include <iostream>

using namespace std;

int main()
{
    int number ;
    cin >> number ;
    int array1[100] ;
    for ( int n = 0 ; n < number ; n++)
    {
        int number2 ;
        cin >> number2 ;
        for ( int i = 0 ; i < number2 ; i++)
            cin >> array1[i] ;
        for ( int i = 0 ; i < number2 ; i++)
            for ( int j = i-1 ; j >= 0; j -- )
                if ( array1[j] > array1[j+1])
                {
                    int num = array1[j] ;
                    array1[j] = array1[j+1] ;
                    array1[j+1] = num ;
                }
        cout << "Case " << n+1 << ": " << array1[(number2-1)/2] << endl ;

     }
    return 0;
}
