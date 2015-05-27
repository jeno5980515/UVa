#include <iostream>

using namespace std;

int main()
{
    int number ;
    for ( ; cin >> number ; )
    {
        bool real = true ;
        int array1[3000] , a ;
        bool correct[3000] ;
        for ( int i = 0 ; i < 3000 ; i ++)
            array1[i] = 0 ;
        for ( int i = 0 ; i < 3000 ; i ++)
            correct[i] = false  ;
        for ( int n = 0 ; n < number && cin >> array1[n] ; n++);
        int num ;
        for ( int i = 0 ; i < number-1 ; i ++)
        {
            num = array1[i] - array1[i+1] ;
            if ( num < 0)
                num*= -1 ;
            correct[num-1] = true ;
        }
        for ( int i = 0 ; i < number-1 ; i ++)
            if ( correct[i] == false )
            {
                real = false ;
                break ;
            }
        if ( real == true )
            cout << "Jolly" <<endl ;
        else
            cout << "Not jolly" << endl ;
    }
    return 0;
}
