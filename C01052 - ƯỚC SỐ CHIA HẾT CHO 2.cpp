#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		for(int i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				int j = n / i;
				if(i % 2 == 0) cnt++;
				if (j % 2 == 0 && j != i) cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
