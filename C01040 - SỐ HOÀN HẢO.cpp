#include <stdio.h>
#include <math.h>

int check(int n){
	long long sum = 1;
	int dd[100001] = {0};
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0 && dd[i] == 0){
			sum += i;
			sum += n / i;
			dd[i] = 1;
			dd[n / i] = 1;
		}
	}
	if(sum == n) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if(check(n)) printf("1");
	else printf("0");
	return 0;
}
