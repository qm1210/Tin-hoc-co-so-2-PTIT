#include <stdio.h>
#include <math.h>

int check(int n, int a[]){
	int l = 0, r = n - 1;
	while(l < r){
		if(a[l] != a[r]) return 0;
		l++;
		r--;
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
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		if(check(n, a)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

