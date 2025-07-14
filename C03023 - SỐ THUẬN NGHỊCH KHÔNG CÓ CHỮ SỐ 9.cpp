#include <stdio.h>
#include <math.h>

int tn(int n){
	int tmp = n;
	int rev = 0;
	while(tmp > 0){
		rev = rev * 10 + tmp % 10;
		tmp /= 10;
	}
	return rev == n;
}

int check(int n){
	while(n > 0){
		if(n % 10 == 9) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 2; i < n; i++){
		if(tn(i) && check(i)){
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
	return 0;
}
