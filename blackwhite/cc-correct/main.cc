#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

int solve(vector<int>::iterator b, vector<int>::iterator e)
{
  while (*b == 0) {
    b++;
  }
  if (b == e) {
    // All 0
    return 0;
  }
  assert(*b == 1);
  vector<int>::iterator one = b;

  int ans = 0;
  while (*b == 1) {
    b++, ans++;
  }
  if (b == e) {
    // game over
    return 0;
  }
  assert(*b == 0);
  vector<int>::iterator zero = b;

  // swap
  *one = 0, *zero = 1;
  return ans + solve(one + 1, e);
}

int main()
{
  int D; cin >> D;
  while (D--) {
    int N; cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; ++i) {
      cin >> S[i];
    }

    cout << solve(S.begin(), S.end()) << endl;
  }
}
