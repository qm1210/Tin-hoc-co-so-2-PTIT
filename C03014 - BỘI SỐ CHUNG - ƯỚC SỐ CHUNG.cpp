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
	return a * b / gcd(a, b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld %lld\n", lcm(a, b), gcd(a, b));
	}
	return 0;
}
