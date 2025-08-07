#include <stdio.h>
	
long long f[93];
void fibo(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i < 93; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	fibo();
	long long a[n][n];
	int tmp = 0;
	int top = 0, left = 0, bot = n - 1, right = n - 1;
	while(tmp < n * n){
		for(int i = left; i <= right; i++){
			a[top][i] = f[tmp++];
		}
		top++;
		for(int i = top; i <= bot; i++){
			a[i][right] = f[tmp++];
		}
		right--;
		for(int i = right; i >= left; i--){
			a[bot][i] = f[tmp++];
		}
		bot--;
		for(int i = bot; i >= top; i--){
			a[i][left] = f[tmp++];
		}
		left++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
