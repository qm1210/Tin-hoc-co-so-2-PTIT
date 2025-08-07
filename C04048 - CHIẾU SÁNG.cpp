#include <stdio.h>
#include <string.h>

int main(){
	int n, m, k;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	int a[m], b[n + 1];
	for(int i = 0; i <= n; i++){
		b[i] = 0;
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		int min = a[i] - k;
		int max = a[i] + k;
		for(int j = min; j <= max; j++){
			if(j >= 1 && j <= n){
				b[j] = 1;
			}
		}
	}
	int cnt = 0;
	int i = 1;
	while(i <= n){
		if(b[i]) i++;
		else{
			cnt++;
			i += 2 * k + 1;
		}
	}
	printf("%d", cnt);
	return 0;
}
