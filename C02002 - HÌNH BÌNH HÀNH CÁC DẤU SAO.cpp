#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int tmp = n - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= tmp; j++){
			printf("~");
		}
		tmp -= 1;
		for(int j = 1; j <= n; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

