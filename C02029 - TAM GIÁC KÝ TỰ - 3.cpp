#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		char c = 'A' + i - 1;
		int cnt = n - 1;
		for(int j = 1; j <= i; j++){
			if(j == 1) printf("%c ", c);
			else{
				printf("%c ", c + cnt);
				c += cnt;
				cnt--;
			}
		}
		printf("\n");
	}
	return 0;
}
