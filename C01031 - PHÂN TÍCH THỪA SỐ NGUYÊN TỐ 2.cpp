#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int first = 1;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			if(first == 1){
				printf("%d", i);
				first = 0;
			}
			else{
				printf("x%d", i);
			}
			n /= i;
		}
	}
	if(n != 1) printf("x%d", n);
	return 0;
}
