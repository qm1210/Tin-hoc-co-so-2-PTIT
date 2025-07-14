#include <stdio.h>
#include <math.h>

int check(int n){
	if(n == 2 || n == 3 || n == 5 || n == 7) return 1;
	return 0;
}

int main(){
	long long n;
	scanf("%lld", &n);
	int dd[10] = {0};
	while(n > 0){
		if(check(n % 10)){
			dd[n % 10]++;
		}
		n /= 10;
	}
	for(int i = 0; i < 10; i++){
		if(dd[i] != 0) printf("%d %d\n", i, dd[i]);
	}
	return 0;
}
