#include <iostream>
#include <string>
using namespace std;

string input , input2 = "" , input3 , array1[2000] ;
int number , array2[2000] , sum = 0 , sum2 = 0 ;

int quicksort(string d[] , int left , int right)
{
    int p = (left+right)/2 ;
    string pivot = d[p] ;
    int pivot2 = array2[p] ;
    int i = left , j = right ;
    for ( ; i < j ; )
    {
		while (! (i>= p || pivot < d[i]))
			++i;
        if ( i < p )
        {
            d[p]  = d[i] ;
            array2[p]  = array2[i] ;
            p = i ;
        }
		while (! (j <= p || d[j] < pivot))
			--j;
		if (j > p )
		{
			d[p] = d[j] ;
            array2[p]  = array2[j] ;
			p = j;
		}
    }
    d[p] = pivot ;
    array2[p] = pivot2 ;
    if (p - left > 1)
		quicksort(d, left, p - 1);
	if (right - p > 1)
		quicksort(d, p + 1, right);
}

int main()
{
    cin >> number ;
    cin.ignore() ;
    for ( int i = 0 ; i < 2000 ; i ++)
        array2[i] = 0 ;
    for ( int n = 0 ; n < number ; n ++ )
    {
        bool get = false ;
        getline(cin,input) ;
        for ( int i = 0 ; i < input.length() ; i++ )
        {
            if ( get == true )
            {
                if ( input[i] == ' ' )
                    break ;
            }
            if ( input[i] != ' ' )
                get = true ;
            if ( get == true )
                input2 += input[i] ;
        }
        input3 = input2 ;
        input2 = "" ;
        sum2 = sum ;
        for ( int i = 0 ; i <= sum ; i++ )
        {
            if ( array1[i] == input3 )
            {
                array2[i] ++ ;
                break ;
            }
            else if ( i == sum )
            {
                array1[i] = input3 ;
                sum2 ++ ;
                array2[i] ++ ;
            }
        }
        sum = sum2 ;
    }
    quicksort(array1, 0 , sum - 1  ) ;
    for ( int i = 0 ; i < sum ; i++)
        cout << array1[i] << " " << array2[i] << endl ;
    return 0;
}
