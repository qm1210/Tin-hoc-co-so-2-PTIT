#include <stdio.h>
#include <math.h>

int check(int n){
	int tmp = n % 10;
	n /= 10;
	while(n != 0){
		if(tmp >= n % 10) return 0;
		tmp = n % 10;
		n /= 10;
	}
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

