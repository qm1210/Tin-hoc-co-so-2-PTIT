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
	for(int i = 0; i < n; i++){
		if(dd[a[i]] != 0){
			printf("%d ", a[i]);
			dd[a[i]] = 0;
		}
	}
	return 0;
}


