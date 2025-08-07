#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int minA = 1000000, minB = 1000000;
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a < minA) minA = a;
        if (b < minB) minB = b;
    }
    printf("%lld\n", 1LL * minA * minB);
    return 0;
}
