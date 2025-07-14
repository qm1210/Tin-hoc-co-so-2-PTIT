#include <stdio.h>
#include <string.h>

int main(){
	char s[105];
	gets(s);
	char *word[100];
	int cnt = 0;
	char *token = strtok(s, " ");
	while(token != NULL){
		int found = 0;
		for(int i = 0; i < cnt; i++){
			if(strcmp(token, word[i]) == 0){
				found = 1;
				break;
			}
		}
		if(found == 0){
			word[cnt++] = token;
		}
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < cnt; i++){
		printf("%s ", word[i]);
	}
	return 0;
}
