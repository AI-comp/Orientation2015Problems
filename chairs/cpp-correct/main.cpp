#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t, d;

    cin >> d;
    for ( int j = 0; j < d; j++) {
        cin >> n >> t;
        int m;
        cin >> m;

        vector<int> children; 
        for ( int i = 0; i < m; i++ ) {
            int c;
            cin >> c;
            children.push_back(( t + c ) % n);
        }

        sort(children.begin(), children.end());

        for( int i = 0; i < m; i++)
            cout << ( i == 0 ? "" : " " ) << children[i];

        cout << endl;
    }
}
