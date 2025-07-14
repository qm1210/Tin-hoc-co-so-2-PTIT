#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d = ", n);
		int first = 0;
		int dd[100001] = {0};
		for(int i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				dd[i]++;
				n /= i;
			}
			if(dd[i] != 0){
				if(first == 0){
					printf("%d^%d ", i, dd[i]);
					first = 1;
				}
				else printf("* %d^%d ", i, dd[i]);
			}
		}
		if(n != 1) printf("* %d^1 ", n);
		printf("\n");
	}
	return 0;
}
