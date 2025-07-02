#include <stdio.h>
#include <math.h>

int check(int n){
	while(n != 0){
		int tmp = n % 10;
		n /= 10;
		if(tmp < n % 10) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int start = pow(10, n - 1);
		int end = pow(10, n);
		for(int i = start; i < end; i++){
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
