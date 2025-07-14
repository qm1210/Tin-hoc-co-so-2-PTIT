#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int index = 1;
	for(int i = 1; i <= n; i++){
		int tmp = index;
		if(i % 2 == 1){
			for(int j = tmp; j <= tmp + i - 1; j++){
				printf("%d ", index++);
			}
		}
		else{
			int temp = tmp + i - 1;
			for(int j = tmp + i - 1; j >= tmp; j--){
				printf("%d ", temp--);
				index++;
			}
		}
		printf("\n");
	}
	return 0;
}
