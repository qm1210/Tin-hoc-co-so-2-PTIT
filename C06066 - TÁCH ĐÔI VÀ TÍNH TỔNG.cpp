#include <stdio.h>
#include <string.h>

void congChuoi(char *a, char *b, char *ketqua) {
    char temp[210];
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int n = 0, carry = 0;
    while(i >= 0 || j >= 0 || carry){
        int soA = (i >= 0) ? a[i] - '0' : 0;
        int soB = (j >= 0) ? b[j] - '0' : 0;
        int tong = soA + soB + carry;

        temp[n++] = tong % 10 + '0';
        carry = tong / 10;
        i--; j--;
    }
    for(int k = 0; k < n; k++){
        ketqua[k] = temp[n - 1 - k];
    }
    ketqua[n] = '\0';
}

int main() {
    char s[210], trai[110], phai[110], ketqua[210];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    while(strlen(s) > 1){
        int len = strlen(s);
        int mid = len / 2;
        strncpy(trai, s, mid);
        trai[mid] = '\0';
        strcpy(phai, s + mid);
        congChuoi(trai, phai, ketqua);
        printf("%s\n", ketqua);
        strcpy(s, ketqua);
    }

    return 0;
}

