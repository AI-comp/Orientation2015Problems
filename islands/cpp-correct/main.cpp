#include <iostream>
#include <vector>
using namespace std;

void search ( int cur, vector<int> &islands, vector<vector<int> > &graph, int v ) {
    islands[cur] = 0;

    for ( int i = 0; i < v; i++ ) {
        if ( graph[cur][i] && islands[i] ) {
            search ( i, islands, graph, v );
        }
    }
}

int main() {
    int v, e, d;

    cin >> d;
    while ( cin >> v >> e, d-- ) {
        vector<vector<int> > graph ( v, vector<int> ( v ) );

        for ( int i = 0; i < e; i++ ) {
            int s, g;
            cin >> s >> g;
            graph[s - 1][g - 1] = 1;
            graph[g - 1][s - 1] = 1;
        }

        int connected = 0;
        vector<int> islands ( v, 1 );

        for ( int i = 0; i < v; i++ ) {
            if ( islands[i] ) {
                connected++;
                search ( i, islands, graph, v );
            }
        }

        cout << connected - 1 << endl;
    }
}
