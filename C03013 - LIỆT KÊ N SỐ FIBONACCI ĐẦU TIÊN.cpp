#include <stdio.h>
#include <math.h>

long long f[93] = {0};
void fibo(int n){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	fibo(n);
	for(int i = 0; i < n; i++){
		printf("%lld ", f[i]);
	}
	return 0;
}
