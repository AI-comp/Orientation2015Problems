#include <iostream>
#include <vector>
#include <set>
#include <cassert>
#include <algorithm>
using namespace std;

int main()
{
  int D; cin >> D;
  while (D--) {
    int V, E; cin >> V >> E;
    vector<int> uf(V); // union find
    for (int i = 0; i < V; ++i) {
      uf[i] = i;
    }

    for (int i = 0; i < E; ++i) {
      int S, G; cin >> S >> G; S--; G--;
      if (S > G) { swap(S, G); }
      uf[G] = uf[S];
    }

    for (int i = 0; i < V; ++i) {
      int g = uf[i]; // group
      while (g != uf[g]) {
        g = uf[g];
      }
      uf[i] = g;
    }

    set<int> groups;
    groups.insert(uf[0]);
    int ans = 0;
    for (int i = 1; i < V; ++i) {
      if (groups.find(uf[i]) == groups.end()) {
        groups.insert(uf[i]);
        ans++;
      }
    }
    cout << ans << endl;
  }
}
