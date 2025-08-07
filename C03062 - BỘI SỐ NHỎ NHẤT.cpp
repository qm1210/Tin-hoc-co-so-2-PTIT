#include <stdio.h>

long long gcd(long long a, long long b){
	while(b != 0){
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

long long lcm(long long a, long long b){
	return (a * b) / gcd(a, b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		long long res = n;
		for(long long i = n; i <= m; i++){
			res = lcm(res, i);
		}
		printf("%lld\n", res);
	}
	return 0;
}
