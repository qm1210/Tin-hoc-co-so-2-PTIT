#include <stdio.h>

int gcd(int a, int b){
	while(b != 0){
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
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
		for(int j = i + 1; j <= max; j++){
			if(gcd(i, j) == 1) printf("(%d,%d)\n", i, j);
		}
	}
	return 0;
}
