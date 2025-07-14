#include <stdio.h>
#include <math.h>

int check(int n){
	return n % 2 == 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		for(int i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				if(check(i)) cnt++;
				if(n / i != i && check(n / i)) cnt++; 
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
