#include <stdio.h>
#include <math.h>

int check(int n){
	int tmp = n;
	int rev = 0;
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev == tmp;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if((check(a) && !check(b)) || (!check(a) && check(b))) printf("YES");
	else printf("NO");
	return 0;
}

