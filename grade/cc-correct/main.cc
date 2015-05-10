#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N; cin >> N;
  while (N--) {
    int A, E; cin >> A >> E;
    int t = A + E;
    if (t >= 90) {
      cout << "A+" << endl;
    } else if (t >= 80) {
      cout << "A" << endl;
    } else if (t >= 70) {
      cout << "B" << endl;
    } else if (t >= 60) {
      cout << "C" << endl;
    } else if (t >= 1) {
      cout << "F" << endl;
    } else {
      cout << "G" << endl;
    }
  }
}
