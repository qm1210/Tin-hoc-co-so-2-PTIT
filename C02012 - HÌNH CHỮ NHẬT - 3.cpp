#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++){
		if(i <= b){
			for(int j = i; j >= 1; j--){
				printf("%d", j);
			}
			for(int j = 2; j <= b - i + 1; j++){
				printf("%d", j);
			}
		}
		else{
			for(int j = i; j >= i - b + 1; j--){
				printf("%d", j);
			}
		}
		printf("\n");
	}
	return 0;
}
