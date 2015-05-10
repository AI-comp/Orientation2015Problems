#include <stdio.h>

int main() {
	int N, A, T, i, score;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d %d", &A, &T);
		score = A + T;
		if(score >= 90) {
			printf("A+\n");
		} else if(score >= 80) {
			printf("A\n");
		} else if(score >= 70) {
			printf("B\n");
		} else if(score >= 60) {
			printf("C\n");
		} else if(score == 0) {
			printf("G\n");
		} else {
			printf("F\n");
		}
	}
	return 0;
}