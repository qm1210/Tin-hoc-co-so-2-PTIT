#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < 2 * n - 1; i++){
		int cnt = 0;
		int min = 10;
		if(i < n) min = n - i;
		else min = i - n + 2;
		for(int j = n; j >= min; j--){
			printf("%d", j);
			cnt++;
		}
		for(int j = 0; j < 2 * (min - 1) - 1; j++) printf("%d", min);
		if(min == 1) for(int j = min + 1; j <= n; j++) printf("%d", j);
		else for(int j = min; j <= n; j++) printf("%d", j);
		printf("\n");
	}
	return 0;
}
