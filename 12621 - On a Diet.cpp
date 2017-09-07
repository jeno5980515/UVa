#include <iostream>

using namespace std;

int main(){
  int caseNumber, itemAmount, cal, item;
  cin >> caseNumber ;
  while(caseNumber--){
    bool dp[1000] = {};
    dp[0] = true;
    cin >> cal >> itemAmount ;
    cal /= 10;
    for (int i = 0; i < itemAmount; i ++){
      cin >> item;
      item /= 10;
      for(int j = 1000-item; j >= 0; j --) {
        if (dp[j]){
          dp[j+item] = true;
        }
      }
    }
    int resultIndex = cal;
    while( resultIndex < 1000 && dp[resultIndex] == false )
      resultIndex ++;
    if ( resultIndex != 1000 ){
      cout << resultIndex * 10 << endl ;
    } else {
      cout << "NO SOLUTION" << endl ;
    }
  }
  return 0;
}
