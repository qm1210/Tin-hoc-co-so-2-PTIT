#include <stdio.h>

void sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}	
}

void sortrev(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] > a[i]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}	
}

int main(){
	int t;
	scanf("%d", &t);
	for(int q = 1; q <= t; q++){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		for(int i = 0; i < n; i++) scanf("%d", &b[i]);
		sort(a, n);
		sortrev(b, n);
		printf("Test %d:\n", q);
		for(int i = 0; i < n; i++){
			printf("%d %d ", a[i], b[i]);
		}
		printf("\n");
	}
	return 0;
}
