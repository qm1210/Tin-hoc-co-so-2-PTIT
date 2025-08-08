#include <stdio.h>
#include <string.h>

struct SinhVien {
    int ma;
    char ten[100];
    float a, b, c, tong;
};

int main() {
    struct SinhVien sv[1000];
    int cnt = 1; 
    while (1) {
        int n;
        scanf("%d", &n);
        getchar(); 

        if (n == 1) { 
            int m;
            scanf("%d", &m);
            getchar();
            for (int i = cnt; i < cnt + m; i++) {
                sv[i].ma = i;
                gets(sv[i].ten);
                scanf("%f %f %f", &sv[i].a, &sv[i].b, &sv[i].c);
                getchar();
                sv[i].tong = sv[i].a + sv[i].b + sv[i].c;
            }
            cnt += m;
            printf("%d\n", cnt - 1);
        }
        else if (n == 2) {
            int m;
            scanf("%d", &m);
            getchar();
            char s[100];
            gets(s);
            strcpy(sv[m].ten, s);
            float x, y, z;
            scanf("%f %f %f", &x, &y, &z);
            sv[m].a = x;
            sv[m].b = y;
            sv[m].c = z;
            sv[m].tong = x + y + z;
            printf("%d\n", m);
        }
        else if (n == 3) {
            for (int i = 1; i < cnt; i++) {
            	if(sv[i].a < sv[i].b && sv[i].b < sv[i].c) printf("%d %s %.1f %.1f %.1f\n", sv[i].ma, sv[i].ten, sv[i].a, sv[i].b, sv[i].c);
            }
            break;
        }
    }
    return 0;
}
