#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	double res = ((double)n * 9 / 5) + 32;
	printf("%0.2lf", res);
	return 0;
}
