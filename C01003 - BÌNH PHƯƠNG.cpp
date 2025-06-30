#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long res = (long long)n * n;
		printf("%lld\n", res);
	}
	return 0;
}
