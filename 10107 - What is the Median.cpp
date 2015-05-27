#include <iostream>

using namespace std;

int main()
{
    int array[10000];
    int count = 0 ;
    int input , n = 0;
    for ( ;cin >> input && !cin.eof(); )
    {
        array[count] = input ;
        count ++ ;
        for (int i = 0 ; i < count ; i ++ )
        {
            for (int j = i ; j <count-1 ; j++)
            {
                if ( array[j] > array[j+1])
                {
                    n = array[j];
                    array[j] = array[j+1];
                    array[j+1] = n ;
                }
            }
        }
        if ( count % 2 == 0)
        {
            cout << (array[count/2-1]+array[count/2])/2 <<endl;

        }
        else
        {
                cout << array[(count-1)/2] << endl ;
        }

    }
    return 0;
}
