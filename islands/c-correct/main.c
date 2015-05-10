#include <stdio.h>

int V, E, S, G, D, ans, updated, i, j;
char bridge[1000][1000], used[1000];

void dfs(int p) {
	used[p] = 1;
	for(j = 0; j < V; j++) {
		if(!used[j] && bridge[p][j]) {
			dfs(j);
		}
	}
}

int main() {
	scanf("%d", &D);
	while(D--) {
		scanf("%d %d", &V, &E);
		
		for(i = 0; i < V; i++) {
			for(j = 0; j < V; j++) {
				bridge[i][j] = 0;
			}
		}
		for(i = 0; i < E; i++) {
			scanf("%d %d", &S, &G);
			bridge[S-1][G-1] = 1;
			bridge[G-1][S-1] = 1;
		}
		for(i = 0; i < V; i++) {
			used[i] = 0;
		}
		
		ans = 0;
		for(i = 0; i < V; i++) {
			if(!used[i]) {
				ans++;
				dfs(i);
			}
		} 
		printf("%d\n", ans-1);
	}
	
	return 0;
}