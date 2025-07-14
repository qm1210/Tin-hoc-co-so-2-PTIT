#include <stdio.h>
#include <math.h>

int check(long long n){
	long long tmp = n;
	long long rev = 0;
	int sum = 0;
	while(n != 0){
		if((n % 10) % 2 == 0) return 0;
		sum += n % 10;
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	if(rev != tmp) return 0;
	if(sum % 2 == 0) return 0;
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
