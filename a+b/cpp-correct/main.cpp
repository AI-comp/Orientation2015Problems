#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
    	cin >> a >> b;
        int answer = a + b;
        cout << answer << endl;
    }
}
