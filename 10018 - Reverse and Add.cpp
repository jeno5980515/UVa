#include <iostream>
#include <string>
using namespace std;

int main()
{
    int input[100] , input2[100] , sum[100] , carry[100];
    int number , times = 0 , count = 0 ;
    bool real = false;
    long long int in ;
    cin >> number ;
    for ( int n = 0  ; n < number && cin >> in; n++ )
    {
        real = false ;
        count = 0 ;
        for ( int i = in , j = 0 ; in > 0 ; count ++ , j ++ , in /= 10 )
            sum[j] = in % 10 ;
        for ( int i = 0 ; i < 100 ; i ++ )
            carry[i] = 0 ;
        for ( int i = 0 ; i < 100 ; i ++ )
            input2[i] = 0 ;
        for ( times = 0 ; real != true  ; times ++)
        {
            for ( int i = 0 ; i < count ; i++ )
                input[i] = sum[i] ;
            for ( int i = 0 ; i < 100 ; i ++ )
                carry[i] = 0 ;
            for ( int i = 0 ; i < count ; i++ )
                input2[i] = input[count-i-1] ;
            for ( int i = count - 1 ; i >= 0 ; i--)
            {
                sum[i] = input[i]+input2[i]+carry[i] ;
                if (sum[i] > 9 )
                {
                    if ( i == 0 )
                    {
                        for ( int i = count ; i > 0 ; i--)
                            sum[i] = sum[i-1] ;
                        sum[0] = 1 ;
                        sum[1] -=10 ;
                        count +=1 ;
                    }
                    else
                    {
                        carry[i-1] += 1 ;
                        sum[i] -= 10 ;
                    }

                }
            }
            real = true ;
            for ( int i = 0  ; i <= count/2 -1 || i == 0; i++)
            {
                if ( sum[i] == sum[count-i-1] )
                {
                    real = true ;
                }
                else
                {
                    real = false ;
                    break;
                }
            }

        }
        cout << times << " ";
        for ( int i = 0 ; i < count ; i ++)
            cout << sum[i] ;
        cout << endl;
    }
    return 0;
}
