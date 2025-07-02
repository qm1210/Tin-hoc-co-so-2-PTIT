#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	char maxChar = 'A' + b - 1;
	for(int i = 1; i <= a; i++){
		if(i <= b){
			for(int j = b - a + i - 1; j >= 1; j--){
				printf("%c", maxChar - j);
			}
			for(int j = 1; j <= a - i + 1; j++){
				if(j <= b) printf("%c", maxChar);
			}
		}
		else{
			for(int j = i - b; j >= 1; j--){
				printf("%c", maxChar - j);
			}
			for(int j = i - b + 1; j <= b; j++){
				printf("%c", maxChar);
			}
		}
		printf("\n");
	}
	return 0;
}

