#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int dd[100001] = {0};
	int cnt = 0;
	for(int i = 0; i < n; i++){
		dd[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(dd[a[i]] == 1){
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0; i < n; i++){
		if(dd[a[i]] == 1){
			printf("%d ", a[i]);
		}
	}
	return 0;
}


