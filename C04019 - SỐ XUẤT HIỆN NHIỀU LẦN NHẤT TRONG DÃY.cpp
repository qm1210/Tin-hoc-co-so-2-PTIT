#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		int dd[30001] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			dd[a[i]]++;
		}
		int max = 0;
		for(int i = 0; i < 30001; i++){
			if(dd[i] > max) max = dd[i];
		}
		for(int i = 0; i < n; i++){
			if(dd[a[i]] == max){
				printf("%d ", a[i]);
				dd[a[i]] = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
