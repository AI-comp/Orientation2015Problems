#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

int en2i(string en)
{
  if (en == "GEN") { return 0; };
  if (en == "LTG") { return 1; };
  if (en == "MJG") { return 2; };
  if (en == "COL") { return 3; };
  if (en == "LTC") { return 4; };
  if (en == "MAJ") { return 5; };
  if (en == "CPT") { return 6; };
  if (en == "1LT") { return 7; };
  if (en == "2LT") { return 8; };
  if (en == "PLA") { return 9; };
  if (en == "TNK") { return 10; };
  if (en == "CAV") { return 11; };
  if (en == "ENG") { return 12; };
  if (en == "SPY") { return 13; };
  if (en == "MIN") { return 14; }
}

string i2ans(int i) {
  if (i == -1) { return "ENEMY"; };
  if (i == 0) { return "DRAW"; };
  if (i == 1) { return "FRIEND"; };
}

int main()
{
  int N; cin >> N;

  int table[15][15] = {
    { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, 0 },
    { -1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
    { -1, -1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
    { -1, -1, -1, 0, 1, 1, 1, 1, 1, -1, -1, 1, 1, 1, 0 },
    { -1, -1, -1, -1, 0, 1, 1, 1, 1, -1, -1, 1, 1, 1, 0 },
    { -1, -1, -1, -1, -1, 0, 1, 1, 1, -1, -1, 1, 1, 1, 0 },
    { -1, -1, -1, -1, -1, -1, 0, 1, 1, -1, -1, 1, 1, 1, 0 },
    { -1, -1, -1, -1, -1, -1, -1, 0, 1, -1, -1, 1, 1, 1, 0 },
    { -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 1, 1, 1, 0 },
    { -1, -1, -1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 },
    { -1, -1, -1, 1, 1, 1, 1, 1, 1, -1, 0, 1, -1, 1, 0 },
    { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 1, 0 },
    { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 0, 1, 1 },
    { 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0 },
  };

  while (N--) {
    string F, E; cin >> F >> E;
    cout << i2ans(table[en2i(F)][en2i(E)]) << endl;
  }
}
