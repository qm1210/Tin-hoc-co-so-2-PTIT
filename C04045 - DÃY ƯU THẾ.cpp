#include <stdio.h>

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        int a[201];
        int n = 0;           
        int even = 0, odd = 0; 
        char c;
        while (1) {
            if (scanf("%d", &a[n]) != 1) break;

            if (a[n] % 2 == 0)
                even++;
            else
                odd++;
            n++;
            c = getchar(); 
            if (c == '\n' || c == EOF) break;
        }
        if ((n % 2 == 0 && even > odd) || (n % 2 == 1 && odd > even))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
