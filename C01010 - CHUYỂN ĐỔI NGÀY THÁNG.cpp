#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int nam = n / 365;
	n -= nam * 365;
	int tuan = n / 7;
	n -= tuan * 7;
	printf("%d %d %d", nam, tuan, n);
	return 0;
}
