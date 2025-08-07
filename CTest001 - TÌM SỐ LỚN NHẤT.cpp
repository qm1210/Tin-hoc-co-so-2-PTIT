#include <stdio.h>

int main(){
	long long n, max = 0;
	while (scanf("%lld", &n) == 1){
		if(max < n) max = n;
	} 
	printf("%lld", max);
	return 0;
}
