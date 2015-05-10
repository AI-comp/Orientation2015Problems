#include <stdio.h>

int is_on_line(int x1, int y1, int x2, int y2, int nx, int ny) {
	int dx = x2-x1, dy = y2-y1, ndx = nx-x1, ndy = ny-y1;
	if(dx*ndy == ndx*dy) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int	N, D, x[50], y[50], i, j, k, ans, count;
	scanf("%d", &D);
	while(D--) {
		scanf("%d", &N);
		for(i = 0; i < N; i++) {
			scanf("%d %d", &x[i], &y[i]);
		}
		
		ans = 0;
		for(i = 0; i < N-1; i++) {
			for(j = i+1; j < N; j++) {
				count = 0;
				for(k = 0; k < N; k++) {
					if(is_on_line(x[i], y[i], x[j], y[j], x[k], y[k]) == 1) {
						count++;
					}
				}
				if(ans < count) {
					ans = count;
				}
			}
		}
		
		printf("%d\n", ans);
	}
	return 0;
}