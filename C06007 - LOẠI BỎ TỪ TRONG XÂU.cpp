#include <stdio.h>
#include <string.h>

int main() {
    char S1[105], S2[105];
    gets(S1);
    gets(S2);
    char *token = strtok(S1, " ");
    int first = 1;
    while (token != NULL) {
        if (strcmp(token, S2) != 0) {
            if (!first) printf(" ");
            printf("%s", token);
            first = 0;
        }
        token = strtok(NULL, " ");
    }
    return 0;
}
