#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cin >> m;
    for ( int i = 0; i < m; i++ ) {
        cin >> n;
        vector<int> r ( n ), b ( n );

        for ( int i = 0; i < n; i++ ) {
            cin >> r[i];
        }

        for ( int i = 0; i < n; i++ ) {
            cin >> b[i];
        }

        int r_win = 0, b_win = 0;

        for ( int i = 0; i < n; i++ ) {
            if ( r[i] > b[i] ) {
                r_win++;
            } else if ( b[i] > r[i] ) {
                b_win++;
            }
        }

        if ( r_win > b_win ) {
            cout << "RED" << endl;
        } else if ( b_win > r_win ) {
            cout << "BLUE" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }
}
