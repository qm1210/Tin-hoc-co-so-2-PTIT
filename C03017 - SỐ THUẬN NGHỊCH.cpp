#include <stdio.h>
#include <math.h>

int check(long long n){
	long long tmp = n;
	long long rev = 0;
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev == tmp;
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

