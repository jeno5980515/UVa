#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int caseAmount, beginTime, endTime;
  cin >> caseAmount;
  while(caseAmount--) {
    vector< pair<int, int> > days;
    while( cin >> beginTime >> endTime && (beginTime + endTime) != 0 ){
      days.push_back(make_pair(endTime, beginTime));
    }
    sort(days.begin(), days.end());
    int count = 0, nowBeginTime = 0;
    for(int i = 0; i < days.size(); i++) {
      if(nowBeginTime <= days[i].second) {
        nowBeginTime = days[i].first;
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}
