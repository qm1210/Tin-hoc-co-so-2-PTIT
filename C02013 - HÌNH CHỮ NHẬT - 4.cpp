#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int mark = 0;
	if(a <= b){
		for(int i = 1; i <= a; i++){
			for(int j = b - i + 1; j >= 1; j--){
				printf("%d", j);
			}
			for(int j = 2; j <= i; j++){
				printf("%d", j);
			}
			printf("\n");
		}
	}
	else{
		for(int i = 1; i <= a; i++){
			for(int j = a - i + 1; j >= (a - i + 1) - b + 1; j--){
				if(j >= 1) printf("%d", j);
			}
			for(int j = 2; j <= b + i - a; j++){
				printf("%d", j);
			}
			printf("\n");
		}
	}
	return 0;
}
