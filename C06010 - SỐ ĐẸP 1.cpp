#include <stdio.h>
#include <string.h>

int check(char s[]){
	int len = strlen(s);
	int l = 0, r = len - 1;
	while(l < r){
		if(s[l] != s[r]) return 0;
		l++;
		r--;
	}
	for(int i = 0; i < len; i++){
		if((s[i] - '0') % 2 != 0) return 0;
	}
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


