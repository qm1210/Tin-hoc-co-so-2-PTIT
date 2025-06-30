#include <stdio.h>
#include <string.h>

int check(char s[]){
	int l = strlen(s);
	for(int i = 1; i < l; i++){
		if(s[i] < s[i - 1]) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", &s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
