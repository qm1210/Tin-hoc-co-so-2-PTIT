#include <stdio.h>
#include <string.h>

int check(char c){
	if(c == '2' || c == '3' || c == '5' || c == '7') return 1;
	return 0;
}

int main(){
	char s[20];
	scanf("%s", &s);
	int dd[11] = {0};
	for(int i = 0; i < strlen(s); i++){
		if(check(s[i])) dd[s[i] - '0']++;
	}
	for(int i = 0; i < strlen(s); i++){
		if(dd[s[i] - '0'] != 0){
			printf("%c %d\n", s[i], dd[s[i] - '0']);
			dd[s[i] - '0'] = 0;
		}
	}
	return 0;
}
