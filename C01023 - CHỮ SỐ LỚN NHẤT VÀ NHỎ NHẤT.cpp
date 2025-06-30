#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int min = 10, max = -1;
		while(n != 0){
			int tmp = n % 10;
			if(min > tmp) min = tmp;
			if(max < tmp) max = tmp;
			n /= 10;
		}
		printf("%d %d\n", max, min);
	}
	return 0;
}
