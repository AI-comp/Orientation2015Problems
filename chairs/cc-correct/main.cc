#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int D; cin >> D;
  while (D--) {
    int N, T, M; cin >> N >> T >> M;
    vector<bool> chairs(N, true);
    while (M--) {
      int C; cin >> C;
      chairs[C] = false;
    }

    vector<int> ans;
    vector<int> chair_to_child(N);
    for (int i = 0; i < N; ++i) {
      chair_to_child[i] = i;
      chair_to_child[i] += T;
      chair_to_child[i] %= N;
      if (!chairs[i]) {
        ans.push_back(chair_to_child[i]);
      }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); ++i) {
      cout << ans[i];
      if (i == ans.size() - 1) {
        cout << endl;
      } else {
        cout << ' ';
      }
    }
  }
}
