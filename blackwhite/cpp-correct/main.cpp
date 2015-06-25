#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, d;

    cin >> d;
    for ( int k = 0; k < d; k++ ) {
        cin >> n;
        vector<int> s ( n );

        for ( int i = 0; i < n; i++ ) {
            cin >> s[i];
        }

        int ans = 0;

        for ( int i = 0; i < n; i++ ) {
            if ( s[i] == 0 ) {
                for ( int j = 0; j < i; j++ ) {
                    if ( s[j] == 1 ) {
                        ans++;
                    }
                }
            }
        }

        cout << ans << endl;
    }
}
