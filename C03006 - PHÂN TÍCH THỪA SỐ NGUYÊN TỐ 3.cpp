#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	int cnt = 0;
	while(t--){
		cnt++;
		int dd[100000] = {0};
		int n;
		scanf("%d", &n);
		printf("Test %d: ", cnt);
		for(int i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				dd[i]++;
				n /= i;
			}
			if(dd[i] != 0) printf("%d(%d) ", i, dd[i]);
		}
		if(n != 1) printf("%d(1)", n);
		printf("\n");
	}
	return 0;
}
