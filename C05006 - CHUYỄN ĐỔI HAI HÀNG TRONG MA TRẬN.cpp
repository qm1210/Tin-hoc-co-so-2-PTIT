#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for(int i = 0; i < m; i++){
    	for(int j = 0; j < n; j++){
    		scanf("%d", &arr[i][j]);
		}
	}
	int a, b;
	scanf("%d %d", &a, &b);
	int i = 0;
	while(i < m){
		if(i + 1 == a){
			i = b - 1;
			for(int j = 0; j < n; j++) printf("%d ", arr[i][j]);
			printf("\n");
			i = a - 1;
		}
		else if(i + 1 == b){
			i = a - 1;
			for(int j = 0; j < n; j++) printf("%d ", arr[i][j]);
			printf("\n");
			i = b - 1;
		}
		else{
			for(int j = 0; j < n; j++) printf("%d ", arr[i][j]);
			printf("\n");
		}
		i++;
	}
	return 0;
}
