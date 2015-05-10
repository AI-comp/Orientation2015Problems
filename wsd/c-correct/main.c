#include <stdio.h>

int main() {
	int N, D, i, j, k, ans;
	char field[31][31];
	scanf("%d", &D);
	for (k = 0; k < D; k++) {
		scanf("%d", &N);
		ans = 0;
		for(i = 0; i < N; i++) {
			scanf("%s", field[i]);
		}
		
		for(i = 0; i < N; i++) {
			for(j = 0; j < N-2; j++) {
				if(field[i][j] == 'W' && field[i][j+1] == 'S' && field[i][j+2] == 'D') {
					ans++;
				}
			}
		}
		for(i = 0; i < N-2; i++) {
			for(j = 0; j < N; j++) {
				if(field[i][j] == 'W' && field[i+1][j] == 'S' && field[i+2][j] == 'D') {
					ans++;
				}
			}
		}
		
		for(i = 0; i < N; i++) {
			for(j = 2; j < N; j++) {
				if(field[i][j] == 'W' && field[i][j-1] == 'S' && field[i][j-2] == 'D') {
					ans++;
				}
			}
		}
		for(i = 2; i < N; i++) {
			for(j = 0; j < N; j++) {
				if(field[i][j] == 'W' && field[i-1][j] == 'S' && field[i-2][j] == 'D') {
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	
	return 0;
}