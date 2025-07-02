#include <stdio.h>
#include <math.h>

int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

long long f[93] = {0};
void fibo(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
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
	int a, b;
	scanf("%d %d", &a, &b);
	fibo();
	if(a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	long long dd[1001] = {0};
	for(int i = 0; i <= 92; i++){
		if(f[i] <= 1000) dd[f[i]] = 1;
	}
	for(int i = a; i <= b; i++){
		if(nt(i) && (dd[total(i)] == 1)) printf("%d ", i);
	}
	return 0;
}
