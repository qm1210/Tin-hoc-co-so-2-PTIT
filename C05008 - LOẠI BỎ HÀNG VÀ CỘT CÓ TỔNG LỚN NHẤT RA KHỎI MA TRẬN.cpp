#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int q = 1; q <= t; q++){
		int m, n;
		scanf("%d %d", &m, &n);
		int a[m][n];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int markRow, markCol;
		int row = 0, col = 0;
		for(int i = 0; i < m; i++){
			int sum = 0;
			for(int j = 0; j < n; j++){
				sum += a[i][j];
			}
			if(sum > row){
				row = sum;
				markRow = i;
			}
		}
		for(int j = 0; j < n; j++){
			int sum = 0;
			for(int i = 0; i < m; i++){
				if(i == markRow) continue;
				sum += a[i][j];
			}
			if(sum > col){
				col = sum;
				markCol = j;
			}
		}
		printf("Test %d:\n", q);
		for(int i = 0; i < m; i++){
			if(i == markRow) continue;
			for(int j = 0; j < n; j++){
				if(j == markCol) continue;
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
