#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int dd[10001] = {0};
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dd[a[i]]++;
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(dd[a[i]] > 1){
			cnt++;
			dd[a[i]] = -1;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0; i < n; i++){
		if(dd[a[i]] == -1){
			printf("%d ", a[i]);
			dd[a[i]] = 0;
		}
	}
	return 0;
}


