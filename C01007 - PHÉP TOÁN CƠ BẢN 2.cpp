#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(b == 0){
		printf("0");
	}
	else printf("%lld\n%d\n%lld\n%d\n%d\n%0.2f", (long long)a + b, a - b, (long long)a * b, a / b, a % b, (float)a / b);
	return 0;
}
