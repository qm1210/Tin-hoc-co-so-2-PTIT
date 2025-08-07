#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    int da[1001] = {0}, db[1001] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        da[a[i]] = 1;
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
        db[b[i]] = 1;
    }
    for(int i = 0; i <= 1000; i++){
        if(da[i] && db[i]) printf("%d ", i);
    }
    printf("\n");
    for(int i = 0; i <= 1000; i++){
        if(da[i] && !db[i]) printf("%d ", i);
    }
    printf("\n");
    for(int i = 0; i <= 1000; i++){
        if(db[i] && !da[i]) printf("%d ", i);
    }
    return 0;
}

