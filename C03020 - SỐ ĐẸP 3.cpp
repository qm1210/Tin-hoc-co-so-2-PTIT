#include <stdio.h>

int check(int n){
	int sum = 0, rev = 0, cnt = 0, tmp = n;
	while(tmp > 0){
		sum += tmp % 10;
		rev = rev * 10 + tmp % 10;
		if(tmp % 10 == 6) cnt++;
		tmp /= 10;
	}
	if(n == rev && sum % 10 == 8 && cnt >= 1) return 1;
	return 0;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	for(int i = a; i <= b; i++){
		if(check(i)) printf("%d ", i);;
	}
	return 0;
}
