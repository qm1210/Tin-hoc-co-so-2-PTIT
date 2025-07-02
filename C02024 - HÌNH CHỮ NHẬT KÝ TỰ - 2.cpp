#include <stdio.h>
#include <string.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	char maxChar = 'A' + b - 1;
	for(int i = 1; i <= a; i++){
		if(i <= b){
			for(int j = i; j <= b; j++){
				printf("%c", 'A' + j - 1);
			}
			for(int j = i - 1; j >= 1; j--){
				printf("%c", 'A' + j - 1);
			}
		}
		else{
			for(int j = b; j >= 1; j--){
				printf("%c", 'A' + j - 1);
			}
		}
		printf("\n");
	}
	return 0;
}
