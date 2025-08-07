#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int q = 1; q <= t; q++){
		int n;
		scanf("%d", &n);
		int a[n][n];
		int value = n * n;
		int top = 0, bot = n - 1, left = 0, right = n - 1;
		while(value >= 1){
			for(int i = left; i <= right; i++){
				a[top][i] = value--;
			}
			top++;
			for(int i = top; i <= bot; i++){
				a[i][right] = value--;
			}
			right--;
			for(int i = right; i >= left; i--){
				a[bot][i] = value--;
			}
			bot--;
			for(int i = bot; i >= top; i--){
				a[i][left] = value--;
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

