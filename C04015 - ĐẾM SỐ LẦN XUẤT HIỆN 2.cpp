#include <stdio.h>
#include <math.h>

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
		int dd[100001] = {0};
		for(int i = 0; i < n; i++){
			dd[a[i]]++;
		}
		printf("Test %d: \n", k);
		for(int i = 0; i < n; i++){
			if(dd[a[i]] != 0) printf("%d xuat hien %d lan\n", a[i], dd[a[i]]);
			dd[a[i]] = 0;
		}
	}
	return 0;
}
