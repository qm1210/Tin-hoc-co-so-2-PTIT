#include <stdio.h>

long long gcd(long long a, long long b){
	while(b != 0){
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main(){
	long long tu, mau;
	scanf("%lld %lld", &tu, &mau);
	printf("%lld/%lld", tu / gcd(tu, mau), mau / gcd(tu, mau));
	return 0;
}


