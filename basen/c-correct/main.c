#include <stdio.h>

char get_char(int x) {
	if(x < 10) {
		return ('0' + x);
	} else {
		return ('A' + (x - 10));
	}
}

int main() {
	int	B, N, i, j, p, D;
	char str[50] = {};
	scanf("%d", &D);
	for(j = 0; j < D; j++) {
		scanf("%d %d", &B, &N);
		if(B == 0 && N == 0) {
			break;
		}
		p = 0;
		while(N > 0) {
			str[p] = get_char(N%B);
			N = N/B;
			p++;
		}
		for(i = p - 1; i >= 0; i--) {
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}