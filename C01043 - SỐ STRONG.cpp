#include <stdio.h>
#include <math.h>

int check(int n){
	long long sum = 0;
	int m = n;
	while(n > 0){
		int tmp = n % 10;
		long long tich = 1;
		for(int i = 1; i <= tmp; i++){
			tich *= i;
		}
		sum += tich;
		n /= 10;
	}
	if(sum == m) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if(check(n)) printf("1");
	else printf("0");
	return 0;
}
