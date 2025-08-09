#include <stdio.h>
#include <string.h>

int check(char s[]){
	int l = 0, r = strlen(s) - 1;
	int cnt = 0;
	while(l < r){
		if(s[l] != s[r]) cnt++;
		l++;
		r--;
	}
	if(cnt == 1) return 1;
	if(cnt == 0 && strlen(s) % 2 != 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[30];
		scanf("%s", &s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
