#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int cnt = 0;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= cnt; j++){
			printf("~");
		}
		for(int j = 1; j <= b; j++){
			printf("*");
		}
		cnt++;
		printf("\n");
	}
	return 0;
}

