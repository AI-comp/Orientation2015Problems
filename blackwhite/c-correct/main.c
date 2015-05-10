#include <stdio.h>

int main() {
	int	N, S, D, i, j, w, ans;
	scanf("%d", &D);
	for (j = 0; j < D; j++) {
		scanf("%d", &N);
		if(N == 0)
			break;
		
		w = 0;
		ans = 0;
		for(i = 0; i < N; i++) {
			scanf("%d", &S);
			if(S == 0) {
				ans += (i-w);
				w++;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}