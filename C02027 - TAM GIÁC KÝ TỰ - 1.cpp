#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	char c = 'a';
	for(int i = 1; i <= n; i++){
		if(i % 2 == 1){
			for (int j = 0; j < i; j++) {
                printf("%c ", c++);
            }
		}
		else{
			char last = c + i - 1;
			char tmp = last;
			for(char j = last; j >= c; j--){
				printf("%c ", j);
			}
			c += i;
		}
		printf("\n");
	}
	return 0;
}
