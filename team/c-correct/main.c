#include <stdio.h>

int main() {
	int N, win_r, win_b, i, j, M;
	int R[1000], B[1000];
	scanf("%d", &M);
	for(j = 0; j < M; j++) {
		scanf("%d", &N);
		for(i = 0; i < N; i++) {
			scanf("%d", &R[i]);
		}
		for(i = 0; i < N; i++) {
			scanf("%d", &B[i]);
		}
		
		win_r = 0, win_b = 0;
		for(i = 0; i < N; i++) {
			if(R[i] < B[i]) {
				win_b = win_b + 1;
			} else if(R[i] > B[i]) {
				win_r = win_r + 1;
			} else {
				
			}
		}
		
		if(win_r < win_b) {
			printf("BLUE\n");
		} else if(win_r > win_b) {
			printf("RED\n");
		} else {
			printf("DRAW\n");
		}
	}
	return 0;
}