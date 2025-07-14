#include <stdio.h>
#include <string.h>

long long min(long long n){
	long long a[20];
	int x = 0;
	while(n > 0){
		int tmp = n % 10;
		if(tmp == 6) a[x++] = 5;
		else a[x++] = tmp;
		n /= 10;
	}
	long long res = 0;
	for(int i = x - 1; i >= 0; i--){
		res = res * 10 + a[i];
	}
	return res;
}

long long max(long long n){
	long long a[20];
	int x = 0;
	while(n > 0){
		int tmp = n % 10;
		if(tmp == 5) a[x++] = 6;
		else a[x++] = tmp;
		n /= 10;
	}
	long long res = 0;
	for(int i = x - 1; i >= 0; i--){
		res = res * 10 + a[i];
	}
	return res;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long x1, x2;
		scanf("%lld %lld", &x1, &x2);
		printf("%lld %lld\n", min(x1) + min(x2), max(x1) + max(x2));
	}
	return 0;
}
