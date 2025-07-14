#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int ok = 0;
		if(i == 1) printf("@");
		else{
			char peak = 'B' + 2 * (i - 2);
			printf("@");
			for(char c = 'B'; c < peak; c += 2){
				printf("%c", c);
			}
			printf("%c", peak);
			for(char c = peak - 2; c >= 'B'; c -= 2){
				printf("%c", c);
			}
			printf("@");
		}
		printf("\n");
	}
	return 0;
}
