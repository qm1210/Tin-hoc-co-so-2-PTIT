#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	long long sum = 0;
	int min, max;
	if(a > b){
		min = b;
		max = a;
	}
	else{
		min = a;
		max = b;
	}
	for(int i = min; i <= max; i++){
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}
