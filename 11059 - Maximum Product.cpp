#include <iostream>
using namespace std;

int main(){
  long long int amount, arr[20], nowMin, nowMax, result;
  for (int caseNumber = 1; cin >> amount && !cin.eof(); caseNumber ++){
    for (int i = 0; i < amount; i++ ){
      cin >> arr[i] ;
    }
    result = nowMin = nowMax = arr[0];
    for (int i = 1; i < amount; i++ ){
      long long int temp = nowMax;
      nowMax = max(max(nowMax * arr[i], nowMin * arr[i]), arr[i]);
      nowMin = min(min(temp * arr[i], nowMin * arr[i]), arr[i]);
      result = max(nowMax, result);
    }
    if ( result < 0 )
      result = 0;
    cout << "Case #" << caseNumber << ": The maximum product is " << result << "." << endl << endl  ;
  }
}
