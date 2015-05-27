#include <iostream>

using namespace std;

int t[1001][2600] = {} , a[1001] = {} ;

int main(){
    t[0][0] = t[1][0] = a[0] = a[1] = 1 ;
    int count1 = 0 ;
    for ( int i = 2 ; i < 1001 ; i ++ ){
        for ( int j = 0 ; j < count1 + 1 ; j ++ ){
            t[i][j] += t[i-1][j] * i ;
            if ( t[i][j] > 9 ){
                t[i][j+1] += t[i][j] / 10 ;
                t[i][j] %= 10 ;
                if ( j + 1 > count1 )
                    count1 = j + 1 ;
            }
            a[i] += t[i][j] ;
        }
    }
    int input ;
    while ( cin >> input ){
        cout << a[input] << endl ;
    }
    return 0 ;
}
