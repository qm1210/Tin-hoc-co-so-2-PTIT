#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int peak = 2 * i - 1;
		for(int j = 1; j < peak; j += 2) printf("%d", j);
		printf("%d", peak);
		for(int j = peak - 2; j >= 1; j -= 2) printf("%d", j);
		printf("\n");
	}
	return 0;
}
