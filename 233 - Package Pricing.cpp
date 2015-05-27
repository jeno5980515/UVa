#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <map>

using namespace std;

#define maxnumber 9999999

int main()
{
    int n , m , b = 0 ;
    while ( cin >> n && !cin.eof() ) {
        vector <int> number(n+1) ;
        vector <int> price(n+1) ;
        vector <vector<int> > table(n+1,vector<int>(4,0)) ;
        cin.ignore();
        string input ;
        stringstream ss ;
        string money ;
        char c ;
        for ( int n2 = 1 , digit , sum = 0 ; n2 < n + 1 && getline(cin,input) ; n2 ++ , sum = 0 ){
            ss << input << " x " ;
            ss >> number[n2] >> money ;
            for ( int i = 0  ; i < money.length() ; i ++ ){
                if ( money[i] == '.' )
                    continue ;
                sum *= 10 ;
                sum += (int)money[i] - 48 ;
            }
            price[n2] = sum ;
            while ( ss >> c && c != 'x' ){
                ss >> digit ;
                table[n2][(int)c - 97] += digit ;
            }
        }
        map <int , int> amount ;
        cin >> m ;
        cin.ignore();
        for ( int m2 = 0 , digit ; m2 < m && getline(cin,input) ; m2 ++ ){
            int sum[4] = { 0 , 0 , 0 , 0 } ;
            ss << input << " x " ;
            while ( ss >> c && c != 'x' ){
                ss >> digit ;
                sum[(int)c - 97] += digit ;
            }
            vector<vector<vector<vector<int> > > >  dp(sum[0]+1,vector<vector<vector<int> > >
                                                         (sum[1]+1,vector<vector<int> >
                                                         (sum[2]+1,vector<int>
                                                         (sum[3]+1,maxnumber) ))) ;
            dp[0][0][0][0] = 0 ;
            for ( int i = 1 ; i < n + 1 ; i ++ ){
                for ( int j = 0 ; j < sum[0] + 1  ; j ++ ){
                    for ( int k = 0 ; k < sum[1] + 1 ; k ++  ){
                        for ( int l = 0 ; l < sum[2] + 1 ; l ++  ){
                            for ( int q = 0 ; q < sum[3] + 1; q ++   ){
                                int s1 , s2 , s3 , s4 ;
                                s1 = j-table[i][0] , s2 = k-table[i][1] , s3 = l-table[i][2] , s4 = q-table[i][3] ;
                                if ( s1 < 0 ) s1 = 0 ;
                                if ( s2 < 0 ) s2 = 0 ;
                                if ( s3 < 0 ) s3 = 0 ;
                                if ( s4 < 0 ) s4 = 0 ;
                                dp[j][k][l][q] = min(dp[j][k][l][q],dp[s1][s2][s3][s4]+price[i]) ;
                            }
                        }
                    }
                }
            }
            cout << m2+1 << ":" << setw(8) << fixed << setprecision(2) << ((double)dp[sum[0]][sum[1]][sum[2]][sum[3]])/100 ;
            amount.clear();
            int s1 = sum[0] , s2 = sum[1] , s3 = sum[2] , s4 = sum[3] , n3 = 1 ;
            while (  n3 <= n  ){
                int temp1 = s1-table[n3][0] , temp2 = s2-table[n3][1] , temp3 = s3-table[n3][2] , temp4 = s4-table[n3][3] ;
                if ( temp1 < 0 ) temp1 = 0 ;
                if ( temp2 < 0 ) temp2 = 0 ;
                if ( temp3 < 0 ) temp3 = 0 ;
                if ( temp4 < 0 ) temp4 = 0 ;
                if ( dp[s1][s2][s3][s4] - dp[temp1][temp2][temp3][temp4] == price[n3] ){
                    amount[number[n3]] ++ ;
                    s1 = temp1 , s2 = temp2 , s3 = temp3 , s4 = temp4 ;
                } else {
                    n3 ++ ;
                }
            }
            for ( map<int,int>::iterator iter = amount.begin() ; iter != amount.end() ; iter ++ ){
                if ( iter-> second == 1 )
                    cout << " " << iter->first ;
                else
                    cout << " " << iter->first << "(" << iter->second << ")" ;
            }
            ss.clear();
            dp.clear();
            cout << endl ;
        }
        table.clear();
        number.clear();
        price.clear();
        amount.clear();
        cout << endl ;
    }
    return 0;
}
