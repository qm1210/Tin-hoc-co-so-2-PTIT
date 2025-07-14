#include <stdio.h>
#include <math.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]) min = j;
		}
		swap(&a[i], &a[min]);
	}
	for(int i = n - 1; i >= 0; i--){
		printf("%d ", a[i]);
	}
	return 0;
}
