#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void rutgon(int *tu, int *mau) {
    int g = gcd(*tu, *mau);
    *tu /= g;
    *mau /= g;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int q = 1; q <= t; q++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        rutgon(&a, &b);
        rutgon(&c, &d);
        int common_den = lcm(b, d);
        int a1 = a * (common_den / b);
        int c1 = c * (common_den / d);
        int sum_tu = a1 + c1;
        int sum_mau = common_den;
        rutgon(&sum_tu, &sum_mau);
        int thuong_tu = a * d;
        int thuong_mau = b * c;
        rutgon(&thuong_tu, &thuong_mau);
        printf("Case #%d:\n", q);
        printf("%d/%d %d/%d\n", a1, common_den, c1, common_den);  
        printf("%d/%d\n", sum_tu, sum_mau);              
        printf("%d/%d\n", thuong_tu, thuong_mau);                 
    }

    return 0;
}

