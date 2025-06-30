#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		long long tich = 1;
		for(int j = 1; j <= i; j++){
			tich *= j;
		}
		sum += tich;
	}
	printf("%lld", sum);
	return 0;
}
