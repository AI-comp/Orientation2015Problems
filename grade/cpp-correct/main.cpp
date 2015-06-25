#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ ) {
        int a, e;
        cin >> a >> e;
        int sum = a + e;
        string ans = "";

        if ( sum >= 90 ) {
            ans = "A+";
        } else if ( sum >= 80 ) {
            ans = "A";
        } else if ( sum >= 70 ) {
            ans = "B";
        } else if ( sum >= 60 ) {
            ans = "C";
        } else if ( sum >= 1 ) {
            ans = "F";
        } else {
            ans = "G";
        }

        cout << ans << endl;
    }
}
