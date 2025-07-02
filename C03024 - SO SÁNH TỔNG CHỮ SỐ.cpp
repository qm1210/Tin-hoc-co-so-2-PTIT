#include <stdio.h>

int total(int n){
	int sum = 0;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(total(a) > total(b)){
		int tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d %d", a, b);
	return 0;
}
