#include <stdio.h>

void sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]) min = j;
		}
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n], chan[n], le[n];
	int c = 0, l = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0) chan[c++] = a[i];
		else le[l++] = a[i];
	}
	sort(chan, c);
	sort(le, l);
	for(int i = 0; i < c; i++) printf("%d ", chan[i]);
	for(int i = 0; i < l; i++) printf("%d ", le[i]);
	return 0;
}
