#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		char c;
		scanf("%d %d %c", &n, &m, &c);
		int a[n], b[m], res[n + m];
		int index = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			res[index++] = a[i];
		}
		for(int i = 0; i < m; i++){
			scanf("%d", &b[i]);
			res[index++] = b[i];
		}
		if(c == 'T' || c == 'G'){
			for(int i = 0; i < n + m; i++){
				int min = i;
				for(int j = i + 1; j < n + m; j++){
					if(res[min] > res[j]) min = j;
				}
				int tmp = res[i];
				res[i] = res[min];
				res[min] = tmp;
			}
		}
		if(c == 'T'){
			for(int i = 0; i < n + m; i++){
				printf("%d ", res[i]);
			}
		}
		else if(c == 'G'){
			for(int i = n + m - 1; i >= 0; i--){
				printf("%d  ", res[i]);
			}
		}
		else if(c == 'F'){
			for(int i = 0; i < n; i++){
				printf("%d ", a[i]);
			}
			for(int i = 0; i < m; i++){
				printf("%d ", b[i]);
			}
		}
		else{
			for(int i = 0; i < m; i++){
				printf("%d ", b[i]);
			}
			for(int i = 0; i < n; i++){
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
