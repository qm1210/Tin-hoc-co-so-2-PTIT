#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char s[100];
	gets(s);
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for(int i = 0; i < strlen(s); i++){
		if(isdigit(s[i])) cnt1++;
		else if(isalpha(s[i])) cnt2++;
		else cnt3++;
	}
	printf("%d %d %d", cnt2, cnt1, cnt3);
	return 0;
}


