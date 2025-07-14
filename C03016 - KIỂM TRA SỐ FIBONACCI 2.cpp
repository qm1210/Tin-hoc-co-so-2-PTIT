#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	long long f[93];
	f[0] = 0;
	f[1] = f[2] = 1;
	for(int i = 3; i < 93; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	while(t--){
		long long n;
		scanf("%lld", &n);
		int check = 0;
		for(int i = 0; i < 93; i++){
			if(f[i] == n){
				check = 1;
				printf("YES\n");
				break;
			}
		}
		if(check == 0) printf("NO\n");
	}
	return 0;
}
