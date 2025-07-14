#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int dd[100001] = {0};
	for(int i = 1; i < n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		dd[a]++;
		dd[b]++;
	}
	int cnt1 = 0, cnt2 = 0;
	for(int i = 1; i < 100001; i++){
		if(dd[i] == n - 1) cnt1++;
		else if(dd[i] == 1) cnt2++;
	}
	if(cnt1 == 1 && cnt2 == n - 1) printf("Yes");
	else printf("No");
	return 0;
}

