#include <iostream>
#include <string>
using namespace std;

int main() {
    string t;
    int n;

    cin >> n;
    for ( int j = 0; j < n; j++ ) {
        cin >> t;
        int cnt = 1;

        for ( int i = 0; i < t.size(); i++ ) {
            if ( cnt > 0 ) {
                if ( t[i] == 'w' ) {
                    cnt += 3;
                } else {
                    cnt /= 2;
                }
            }
        }

        cout << cnt << endl;
    }
}
