#include <stdio.h>

long long max(long long a, long long b){
	return a > b ? a : b;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		long long max_current = 0, max_global = 0;
		for(int i = 0; i < n; i++){
			max_current = max(a[i], max_current + a[i]);
			max_global = max(max_current, max_global);
		}
		printf("%lld\n", max_global);
	}
	return 0;
}
