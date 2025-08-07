#include <stdio.h>

int main(){
	int m, n, a, b;
	scanf("%d %d", &m, &n);
	int arr[m + 1][n + 1];
	for(int i = 1; i <=  m; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(j == a) printf("%d ", arr[i][b]);
			else if(j == b) printf("%d ", arr[i][a]);
			else printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
