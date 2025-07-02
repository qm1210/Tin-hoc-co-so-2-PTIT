#include <stdio.h>

int check(int n){
	long long sum = 0;
	int tmp = n;
	while(n != 0){
		long long tich = 1;
		for(int i = 1; i <= n % 10; i++){
			tich *= i;
		}
		sum += tich;
		n /= 10;
	}
	return sum == tmp;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(check(i)) printf("%d ", i);
	}
	return 0;
}

