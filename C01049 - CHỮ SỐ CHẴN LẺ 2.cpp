#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int le = 0, chan = 0;
		while(n != 0){
			int tmp = n % 10;
			if(tmp % 2 == 0) chan++;
			else le++;
			n /= 10;
		}
		printf("%d %d\n", le, chan);
	}
	return 0;
}

