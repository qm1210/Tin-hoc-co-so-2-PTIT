#include <stdio.h>
#include <string.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	char max = 'A' + b - 2;
	for(int i = 1; i <= a; i++){
		if(i == 1){
			printf("@");
			for(int j = 1; j < b; j++){
				printf("%c", 'A' + j - 1);
			}
		}
		else if(i <= b){
			for(int j = i - 1; j <= b - 1; j++){
				printf("%c", 'A' + j - 1);
			}
			for(int j = i - 1; j >= 1; j--){
				printf("%c", max);
			}
		}
		else{
			for(int j = 1; j <= b; j++){
				printf("%c", max);
			}
		}
		printf("\n");
	}
	return 0;
}

