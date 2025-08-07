#include <stdio.h>
#include <math.h>

int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int check(int n){
	if(!nt(n)) return 0;
	int sum = 0;
	while(n != 0){
		int tmp = n % 10;
		if(tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7) return 0;
		sum += tmp;
		n /= 10;
	}
	if(!nt(sum)) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(check(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
