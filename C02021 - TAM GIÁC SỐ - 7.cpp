#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int sum = i;
		int cnt = n - 1;
		printf("%d ", i);
		for(int j = 2; j <= i; j++){
			printf("%d ", sum + cnt);
			sum += cnt;
			cnt--;
		}
		printf("\n");
	}
	return 0;
}
