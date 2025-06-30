#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int res[100000];
	int cnt = 0;
	for (int i = ceil(sqrt(a)); i <= floor(sqrt(b)); i++){
    	res[cnt++] = i * i;
	}
	printf("%d\n", cnt);
	for(int i; i < cnt; i++){
		printf("%d\n", res[i]);
	}
	return 0;
}
