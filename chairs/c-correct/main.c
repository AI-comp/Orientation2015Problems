#include <stdio.h>
#include <stdlib.h>

int comp( const void *c1, const void *c2 ) {
	int tmp1 = *(int *)c1;
	int tmp2 = *(int *)c2;

	if( tmp1 < tmp2 )  return -1;
	if( tmp1 == tmp2 ) return  0;
	if( tmp1 > tmp2 )  return  1;
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
		qsort(c, cnt, sizeof(int), comp);
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