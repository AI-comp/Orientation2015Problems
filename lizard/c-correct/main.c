#include <stdio.h>

int main() {
	char s[101], c;
	int	i, j, num, n;
	scanf("%d", &n);
	for(int j = 0; j < n; j++) {
		scanf("%d", &num);
		scanf("%s", s);
		for(i = 0; i <= 100; i++) {
			c = s[i];
			if(c == '\0') {
				break;
			} else if(c == 'w') {
				num = num + 3;
			} else if(c == 'c') {
				num = num / 2;
				if(num == 0) {
					break;
				}
			}
		}
		
		printf("%d\n", num);
	}

	return 0;
}