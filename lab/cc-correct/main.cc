#include <iostream>
#include <vector>
#include <map>
#include <cassert>
#include <algorithm>
using namespace std;

int main()
{
  map<int, int> data;
  data[1]  = 120;
  data[5]  = 360;
  data[9]  = 600;
  data[15] = 960;
  data[25] = 1600;
  data[50] = 3000;
  data[86] = 5000;

  #define MAX_N (1000)
  vector<unsigned int> dp(MAX_N + 1, static_cast<unsigned int>(1e10));
  dp[0] = 0;
  for (int i = 0; i <= MAX_N; ++i) {
    for (map<int, int>::iterator itr = data.begin(); itr != data.end(); ++itr) {
      int n = (*itr).first;
      int price = (*itr).second;
      if (n <= i) {
        dp[i] = min(dp[i], dp[i - n] + price);
      }
    }
  }

  int D; cin >> D;
  while (D--) {
    int N; cin >> N;
    cout << dp[N] << endl;
  }
}
