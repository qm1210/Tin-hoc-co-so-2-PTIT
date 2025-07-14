#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", s);
		char res[20];
		int check = 1;
		int len = strlen(s);
		for(int i = 0; i < strlen(s); i++){
			char c = s[i];
			if(c == '0' || c == '8' || c == '9') res[i] = '0';
			else if(c == '1') res[i] = '1';
			else{
				check = 0;
				break;
			}
		}
		res[len] = '\0';
		int i = 0;
		while(res[i] == '0') i++;
		if(res[i] == '\0') check = 0;
		if(check == 1) printf("%s\n", res + i);
		else printf("INVALID\n");
	}
	return 0;
}

