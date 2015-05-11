#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

int solve(vector<int>::iterator b, vector<int>::iterator e)
{
  cerr << "=== START ===" << endl;
  for(vector<int>::iterator it = b; it != e; ++it) {
    cerr << *it << " ";
  }
  cerr << endl;

  while (*b == 0 && b != e) {
    b++;
  }
  if (b == e) {
    // All 0
    return 0;
  }
  assert(*b == 1);
  vector<int>::iterator one = b;

  int ans = 0;
  while (*b == 1 && b != e) {
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
  int ret = ans + solve(one + 1, e);

  for(vector<int>::iterator it = b; it != e; ++it) {
    cerr << *it << " ";
  }
  cerr << endl;
  cerr << "=== END === (return: " << ret << ")" << endl;
  return ret;
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
