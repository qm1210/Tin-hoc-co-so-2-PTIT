#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	int res[20];
	if(n == 0) printf("0");
	else{
		while(n != 0){
			res[cnt++] = n % 2;
			n /= 2;
		}
		for(int i = cnt - 1; i >= 0; i--){
			printf("%d", res[i]);
		}
	}
	return 0;
}
