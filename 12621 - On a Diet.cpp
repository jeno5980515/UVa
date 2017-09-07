#include <iostream>

using namespace std;

int main(){
  int caseNumber, itemAmount, cal, item;
  cin >> caseNumber ;
  while(caseNumber--){
    bool dp[10000] = {};
    dp[0] = true;
    cin >> cal >> itemAmount ;
    for (int i = 0; i < itemAmount; i ++){
      cin >> item;
      for(int j = 10000-item; j >= 0; j --) {
        if (dp[j]){
          dp[j+item] = true;
        }
      }
    }
    int resultIndex = cal;
    while( resultIndex < 10000 && dp[resultIndex] == false )
      resultIndex ++;
    if ( resultIndex != 10000 ){
      cout << resultIndex << endl ;
    } else {
      cout << "NO SOLUTION" << endl ;
    }
  }
  return 0;
}
