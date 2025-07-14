#include <stdio.h>
#include <string.h>

long long gcd(long long a, long long b){
	while(b != 0){
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

long long lcm(long long a, long long b){
	return a * b / gcd(a, b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", s);
		int l = strlen(s);
		if(l % 2 != 0) printf("INVALID\n");
		else{
			long long a = 0, b = 0;
			for(int i = 0; i < l / 2; i++){
				a = a * 10 + (s[i] - '0');
			}
			for(int i = l / 2; i < l; i++){
				b = b * 10 + (s[i] - '0');
			}
			printf("%lld\n", lcm(a, b));
		}
	}
	return 0;
}




