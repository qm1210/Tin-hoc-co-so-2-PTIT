#include <stdio.h>
#include <math.h>

int check(int n){
	int sum = 0;
	int rev = 0;
	int tmp = n;
	while(tmp > 0){
		sum += tmp % 10;
		rev = rev * 10 + tmp % 10;
		tmp /= 10;
	}
	if(rev == n && sum % 10 == 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		int p1 = pow(10, n - 1), p2 = pow(10, n);
		for(int i = p1; i < p2; i++){
			if(check(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
