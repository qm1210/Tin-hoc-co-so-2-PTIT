#include <stdio.h>
#include <math.h>

int check(long long n){
	if(n % 2 != 0) return 0;
	int chan = 0, le = 0;
	while(n != 0){
		if(n % 2 == 0) chan++;
		else le++;
		n /= 10;
	}
	return chan > le;
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

