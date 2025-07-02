#include <stdio.h>
#include <math.h>

int check(int n){
	long long sum = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			sum += i;
			if(i != n / i){
				sum += n / i;
			}
		}
	}
	if(sum == n) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2; i <= n; i++){
		if(check(i)) printf("%d ", i);
	}
	return 0;
}

