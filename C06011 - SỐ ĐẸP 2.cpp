#include <stdio.h>
#include <string.h>

int check(char s[]){
	int len = strlen(s);
	int l = 0, r = len - 1;
	if(s[0] != '8' || s[len - 1] != '8') return 0;
	while(l < r){
		if(s[l] != s[r]) return 0;
		l++;
		r--;
	}
	int sum = 0;
	for(int i = 0; i < len; i++){
		sum += s[i] - '0';
	}
	if(sum % 10 != 0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[500];
		scanf("%s", s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}



