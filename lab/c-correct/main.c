#include <stdio.h>

int main() {
	int N, D, i, j, dp[1001];
	int num_b[7] = {1, 5, 9, 15, 25, 50, 86};
	int price_b[7] = {120, 360, 600, 960, 1600, 3000, 5000};
	
	for(i = 0; i <= 1000; i++) {
		dp[i] = 1000000000;
	}
	dp[0] = 0;
	for(i = 1; i <= 1000; i++) {
		for(j = 0; j < 7; j++) {
			if(i-num_b[j] >= 0) {
				if(dp[i] > dp[i-num_b[j]] + price_b[j]) {
					dp[i] = dp[i-num_b[j]] + price_b[j];
				}
			}	
		}
	}
	scanf("%d", &D);
	for(i = 0; i < D; i++) {
		scanf("%d", &N);
		printf("%d\n", dp[N]);
	}
	return 0;
}