#include <iostream>
#include <string>
using namespace std;

int quicksort(string d[] , int left , int right)
{
    int p = (left+right)/2 ;
    string pivot = d[p] ;
    int i = left , j = right ;
    for ( ; i < j ; )
    {
		while (! (i>= p || pivot < d[i]))
			++i;
        if ( i < p )
        {
            d[p]  = d[i] ;
            p = i ;
        }
		while (! (j <= p || d[j] < pivot))
			--j;
		if (j > p )
		{
			d[p] = d[j];
			p = j;
		}
    }
    d[p] = pivot ;
    if (p - left > 1)
		quicksort(d, left, p - 1);
	if (right - p > 1)
		quicksort(d, p + 1, right);
}


int main()
{
    int number , array3[10000] ;
    string array1[10000][5] , array2[10000] ;
    for ( ; cin >> number && number != 0 ; )
    {
        for ( int i = 0 ; i < 10000 ; i++ )
            array3[i] = 0 ;
        int sum = 1 ;
        for ( int i = 0 ; i < number ; i ++ )
        {
            cin >> array1[i][0] >> array1[i][1] >> array1[i][2] >> array1[i][3] >> array1[i][4] ;
            quicksort(array1[i], 0 , 4);
            array2[i] = array1[i][0] + array1[i][1] + array1[i][2] + array1[i][3] + array1[i][4] ;
        }
        quicksort(array2, 0 , number-1);
        string str = "000000000000000" ;
        for ( int i = 0 ; i < number ; i++ )
        {
            if ( array2[i] == str )
            {
                sum ++ ;
                if ( i == number -1 )
                {
                    str = array2[i] ;
                    array3[sum] = array3[sum] + sum ;
                    sum = 1 ;
                }
            }
            else
            {
                str = array2[i] ;
                array3[sum] = array3[sum] + sum ;
                sum = 1 ;
            }
        }
        for ( int i = 9999 ; i >= 0 ; i -- )
        {
            if ( array3[i] != 0 )
            {
                cout << array3[i] << endl ;
                break ;
            }
        }

    }

    return 0;
}

