#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[100];
		gets(s);
		int cnt = 1;
		for(int i = 1; i < strlen(s); i++){
			if(s[i] != ' ' && s[i - 1] == ' ') cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}


