#include <stdio.h>

int main() {
    int a, b, n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        int answer = a + b;
        printf("%d\n", answer);
    }
    return 0;
}
