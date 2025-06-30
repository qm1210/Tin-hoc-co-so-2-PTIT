#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[10];
		scanf("%s", &s);
		if(s[0] != s[strlen(s) - 1]) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
