#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        int top = 0, bot = n - 1, left = 0, right = m - 1;
        int count = 0, total = n * m;
        while (count < total) {
            for (int i = left; i <= right && count < total; i++)
                printf("%d ", a[top][i]), count++;
            top++;

            for (int i = top; i <= bot && count < total; i++)
                printf("%d ", a[i][right]), count++;
            right--;

            for (int i = right; i >= left && count < total; i--)
                printf("%d ", a[bot][i]), count++;
            bot--;

            for (int i = bot; i >= top && count < total; i--)
                printf("%d ", a[i][left]), count++;
            left++;
        }
        printf("\n");
    }
    return 0;
}
