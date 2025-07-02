#include <stdio.h>
#include <math.h>

int check(long long n){
	while(n != 0){
		int tmp = n % 10;
		if(tmp % 2 != 0) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
