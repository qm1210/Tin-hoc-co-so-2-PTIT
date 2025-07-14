#include <stdio.h>
#include <string.h>

int main(){
	char s[10000];
	scanf("%s", s);
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == '(') cnt1++;
		else if(s[i] == ')') cnt2++;
		else if(s[i] == '{') cnt3++;
		else if(s[i] == '}') cnt4++;
		else if(s[i] == '[') cnt5++;
		else if(s[i] == ']') cnt6++;
		else if(s[i] == '\'') cnt7++;
		else if(s[i] == '\"') cnt8++;
	}
	if(cnt1 == cnt2 && cnt3 == cnt4 && cnt5 == cnt6 && cnt7 % 2 == 0 && cnt8 % 2 == 0) printf("1");
	else printf("0");
	return 0;
}
