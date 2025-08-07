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
	int t;
	scanf("%d", &t);
	for(int q = 1; q <= t; q++){
		int n;
		scanf("%d", &n);
		int prime[n * n];
		int cnt = 0,k = 2;
		while(cnt < n * n){
			if(check(k)){
				prime[cnt++] = k;
			}
			k++;
		}
		int a[n][n];
		int top = 0, bot = n - 1, left = 0, right = n - 1;
		int tmp = 0;
		while(tmp < n * n){
			for(int i = left; i <= right; i++){
				a[top][i] = prime[tmp++];
			}
			top++;
			for(int i = top; i <= bot; i++){
				a[i][right] = prime[tmp++];
			}
			right--;
			for(int i = right; i >= left; i--){
				a[bot][i] = prime[tmp++];
			}
			bot--;
			for(int i = bot; i >= top; i--){
				a[i][left] = prime[tmp++];
			}
			left++;
		}
		printf("Test %d:\n", q);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
