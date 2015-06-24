#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void bubble_sort(int *c, int n){
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (c[i] > c[j]) {
				swap(&c[i], &c[j]);
			}
		}
	}
}

int main() {
	int	N, T, M, C, D, i, j, cnt;
	int c[101];

	scanf("%d", &D);
	for (j = 0; j < D; j++) {
		scanf("%d %d", &N, &T);
		
		scanf("%d", &M);
		cnt = 0;
		for (i = 0; i < M; i++) {
			scanf("%d", &C);
			c[cnt] = (C + T) % N;
			cnt++;
		}
		bubble_sort(c, cnt);
		for (i = 0; i < cnt; i++) {
			if (i != 0) {
				printf(" ");
			}
			printf("%d", c[i]);
		}
		printf("\n");
	}

	return 0;
}