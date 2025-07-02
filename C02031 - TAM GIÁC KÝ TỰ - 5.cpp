#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        if(i == n - 1) {
            printf("@");
        } else {
            char start = 'A' + n - i - 2;
            for(int j = 0; j < n - i; j++) {
                printf("%c", start + j);
            }
        }
        printf("\n");
    }

    return 0;
}
