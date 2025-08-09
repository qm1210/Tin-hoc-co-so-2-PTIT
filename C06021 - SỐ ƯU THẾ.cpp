#include <stdio.h>
#include <string.h>

int check(char s[]) {
    int chan = 0, le = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        int digit = s[i] - '0';
        if (digit % 2 == 0) chan++;
        else le++;
    }
    if (len % 2 == 0 && chan > le) return 1;
    if (len % 2 != 0 && le > chan) return 1;
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[1005];
        int invalid = 0;
        scanf("%s", s);
        if (s[0] == '0') invalid = 1;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] < '0' || s[i] > '9') {
                invalid = 1;
                break;
            }
        }
        if (invalid) {
            printf("INVALID\n");
        } else {
            if (check(s)) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
