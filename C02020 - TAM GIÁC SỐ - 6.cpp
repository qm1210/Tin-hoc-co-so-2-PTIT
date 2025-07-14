#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - i; j++) printf("~");
		int peak = 2 * i;
		for(int j = 2; j < peak; j += 2) printf("%d", j);
		printf("%d", peak);
		for(int j = peak - 2; j >= 2; j -= 2) printf("%d", j);
		printf("\n");
	}
	return 0;
}
