#include <stdio.h>
#include <math.h>

int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int tn(int n){
	int tmp = n;
	int rev = 0;
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return tmp == rev;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		int cnt = 0;
		scanf("%d %d", &a, &b);
		for(int i = a; i <= b; i++){
			if(nt(i) && tn(i)){
				if(cnt != 0 && cnt % 10 == 0) printf("\n");
				printf("%d ", i);
				cnt++;
			}
		}
		printf("\n\n");
	}
	return 0;
}
