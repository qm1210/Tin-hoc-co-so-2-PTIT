#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		while(n > 0){
			if(n >= 1000) n -= 1000;
			else if(n >= 500) n -= 500;
			else if(n >= 200) n -= 200;
			else if(n >= 100) n -= 100;
			else if(n >= 50) n -= 50;
			else if(n >= 20) n -= 20;
			else if(n >= 10) n -= 10;
			else if(n >= 5) n -= 5;
			else if(n >= 2) n -= 2;
			else n -= 1;
			cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
