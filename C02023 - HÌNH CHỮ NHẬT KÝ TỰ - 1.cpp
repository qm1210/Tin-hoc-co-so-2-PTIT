#include <stdio.h>
#include <string.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int max = a > b ? a : b;
	char maxChar = 'a' + max - 1;
	char mark = maxChar;
	for(int i = 1; i <= a; i++){
		if(i <= b){
			for(int j = 1; j <= i - 1; j++){
				printf("%c", maxChar - j + 1);
				if(j == i - 1) mark = maxChar - j;
			}
			for(int j = i; j <= b; j++){
				printf("%c", mark);
			}
		}
		else{
			for(int j = 1; j <= b; j++){
				printf("%c", maxChar - j + 1);
			}
		}
		printf("\n");
	}
	return 0;
}

