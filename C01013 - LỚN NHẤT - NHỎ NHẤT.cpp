#include <stdio.h>

int main(){
	int max = 0, min = 1e9;
	int n;
	while(scanf("%d", &n) == 1){
		if(n > max) max = n;
		if(n < min) min = n;
	}
	printf("%d %d", max, min);
	return 0;
}

