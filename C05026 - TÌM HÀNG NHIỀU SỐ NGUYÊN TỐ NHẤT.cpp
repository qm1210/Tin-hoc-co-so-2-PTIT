#include <stdio.h>
#include <math.h>

int check(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	int max = 0;
	int tmp;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
			if(check(a[i][j])) cnt++;
		}
		if(cnt > max){
			max = cnt;
			tmp = i;
		}
	}
	printf("%d\n", tmp + 1);
	for(int i = 0; i < n; i++){
		if(i != tmp) continue;
		for(int j = 0; j < n; j++){
			if(check(a[i][j])) printf("%d ", a[i][j]);
		}
	}
	return 0;
}
