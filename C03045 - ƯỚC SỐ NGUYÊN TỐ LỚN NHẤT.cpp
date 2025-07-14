#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int max = 0;
		for(int i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				max = i;
				n /= i;
			}
		}
		if(n != 1) printf("%lld\n", n);
		else printf("%d\n", max);
	}
	return 0;
}
