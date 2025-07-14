#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int cnt = 0;
    long long power = 2;
    while (power <= n) {
        cnt += n / power;
        power *= 2;
    }
    if (cnt >= k) printf("Yes\n");
    else printf("No\n");
    return 0;
}

