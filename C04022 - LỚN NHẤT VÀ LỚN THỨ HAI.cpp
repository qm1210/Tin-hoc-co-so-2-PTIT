#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int max = 0, max2 = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] > max) max = a[i]; 
	}
	for(int i = 0; i < n; i++){
		if(a[i] > max2 && a[i] < max) max2 = a[i]; 
	}
	printf("%d %d", max, max2);
	return 0;
}


