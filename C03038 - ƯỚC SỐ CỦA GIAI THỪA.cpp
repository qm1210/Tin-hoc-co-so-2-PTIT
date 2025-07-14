#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, p;
		scanf("%d %d", &n, &p);
		int x = 0;
		int tmp = 1;
		while(pow(p, tmp) <= n){
			x += n / pow(p, tmp);
			tmp += 1;
		}
		printf("%d\n", x);
	}
	return 0;
}
