#include <stdio.h>
#include <math.h>

int check(int n){
	int tmp = n, rev = 0;
	int sum = 0;
	while(tmp != 0){
		if(tmp % 10 == 4) return 0;
		sum += tmp % 10;
		rev = rev * 10 + tmp % 10;
		tmp /= 10;
	}
	if(n != rev) return 0;
	if(sum % 10 != 0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = pow(10, n - 1); i < pow(10, n); i++){
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
