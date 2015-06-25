#include <iostream>
#include <vector>
#include <set>
#include <cassert>
#include <algorithm>
using namespace std;

int get_leader(vector<int>* _v, int index) {
  vector<int>& v = (*_v);
  int i = index;
  while (i != v[i]) {
    i = v[i];
  }
  int leader = i;
  i = index;
  while (i != v[i]) {
    int t = i;
    i = v[i];
    v[t] = leader;
  }
  return leader;
}

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
      int s_leader = get_leader(&uf, S);
      int g_leader = get_leader(&uf, G);
      uf[s_leader] = g_leader;
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
