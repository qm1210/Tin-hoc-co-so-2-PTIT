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
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int total(int n){
	int sum = 0;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		if(check(total(gcd(a, b)))) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
