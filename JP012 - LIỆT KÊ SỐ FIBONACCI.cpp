#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	long long f[93];
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i < 93; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		for(int i = a; i <= b; i++){
			printf("%lld ", f[i]);
		}
		printf("\n");
	}
	return 0;
}
