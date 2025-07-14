#include <stdio.h>
#include <math.h>

int check(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int dd[10001] = {0};
		for(int i = 0; i < n; i++){
			if(check(a[i])) dd[a[i]]++;
		}
		printf("Test %d: \n", k);
		for(int i = 0; i < 1001; i++){
			if(dd[i] != 0) printf("%d xuat hien %d lan\n", i, dd[i]);
			dd[i] = 0;
		}
	}
	return 0;
}
