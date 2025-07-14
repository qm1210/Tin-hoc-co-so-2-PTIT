#include <stdio.h>
#include <string.h>

int check(long long n){
	char s[20];
	sprintf(s, "%lld", n);
	if((s[0] - '0') != ((s[strlen(s) - 1] - '0') * 2) && (s[0] - '0') * 2 != (s[strlen(s) - 1] - '0')) return 0;
	long long res = 0;
	for(int i = 1; i < strlen(s) - 1; i++){
		res = res * 10 + (s[i] - '0');
	}
	long long tmp = res;
	long long rev = 0;
	while(tmp != 0){
		rev = rev * 10 + tmp % 10;
		tmp /= 10;
	}
	if(res == rev) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

