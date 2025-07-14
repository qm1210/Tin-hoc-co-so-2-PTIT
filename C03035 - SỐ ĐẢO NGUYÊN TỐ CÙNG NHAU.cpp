#include <stdio.h>
#include <math.h>

int gcd(int a, int b){
	while(b != 0){
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int check(int n){
	int tmp = n;
	int rev = 0;
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	if(gcd(rev, tmp) == 1) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
