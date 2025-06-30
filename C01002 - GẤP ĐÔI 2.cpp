#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long res = n * 2;
		printf("%lld\n", res);
	}
	return 0;
}
