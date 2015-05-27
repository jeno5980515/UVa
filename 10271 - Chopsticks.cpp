#include <iostream>
#define MAXNUM 999999999
using namespace std;

int dp[1001][5001] ;
int chopsticks[5001] ;

int main() {
	int number , K , N ;
	for ( int i = 0 ; i < 1001 ; i ++ )
		dp[i][0] = MAXNUM ;
	for ( int i = 0 ; i < 5001 ; i ++ )
		dp[0][i] = 0 ;
	cin >> number ;
	for ( int n = 0 ; n < number ; n ++ ){
		cin >> K >> N ;
		K += 8 ;
		for ( int i = N  ; i > 0 ; i -- ){
			cin >> chopsticks[i] ;
		}
		for ( int i = 1 ; i < K + 1 ; i ++ ){
			for ( int j = 1 ; j < N + 1 ; j ++ ){
				if ( j < i * 3 ){
					dp[i][j] = MAXNUM ;
				} else if ( j >= i * 3 ){
					dp[i][j] = min(dp[i][j-1],dp[i-1][j-2]+(chopsticks[j]-chopsticks[j-1])*(chopsticks[j]-chopsticks[j-1])) ;
				}
			}
		}
		cout << dp[K][N] << endl ;
	}

	return 0;
}
