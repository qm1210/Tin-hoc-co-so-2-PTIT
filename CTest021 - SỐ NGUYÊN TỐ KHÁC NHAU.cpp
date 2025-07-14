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
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		int dd[1001] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(check(a[i])) dd[a[i]]++;
		}
		for(int i = 2; i < 1001; i++){
			if(dd[i] != 0) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}


