#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int q = 1; q <= t; q++){
		int n;
		scanf("%d", &n);		
		int a[n][n], b[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(j <= i) a[i][j] = j + 1;
				else a[i][j] = 0;
			}
		}
		for(int j = 0; j < n; j++){
			for(int i = 0; i < n; i++){
				b[j][i] = a[i][j];
			}
		}
		int c[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				c[i][j] = 0;
				for(int k = 0; k < n; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		printf("Test %d:\n", q);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

