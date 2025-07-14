#include <stdio.h>
#include <math.h>

int prime[2000005];
void sieve(){
	for(int i = 0; i < 2000005; i++) prime[i] = i;
	for(int i = 2; i <= sqrt(2000005); i++){
		if(prime[i] == i){
			for(int j = i * i; j < 2000005; j += i){
				if(prime[j] != i) prime[j] = i;
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	long long sum = 0;
	sieve();
	while(t--){
		int n;
		scanf("%d", &n);
		while(n != 1){
			sum += prime[n];
			n /= prime[n];
		}	
	}
	printf("%lld", sum);
	return 0;
}
