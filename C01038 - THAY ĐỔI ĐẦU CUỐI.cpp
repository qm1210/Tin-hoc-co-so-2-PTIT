#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char s[10];
	scanf("%s", &s);
	int l = strlen(s);
	char tmp = s[0];
	s[0] = s[l - 1];
	s[l - 1] = tmp;
	int res = atoi(s);
	printf("%d", res);
	return 0;
}
