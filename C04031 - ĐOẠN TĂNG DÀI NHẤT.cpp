#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int q = 1; q <= t; q++){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int max = 1;
		int cnt = 1;
		for(int i = 1; i < n; i++){
			if(a[i] > a[i - 1]) cnt++;
			else{
				if(max < cnt) max = cnt;
				cnt = 1;
			}
		}
		if(cnt > max) max = cnt;
		printf("Test %d:\n", q);
		printf("%d\n", max);
		int i = 0;
		while(i < n){
			int start = i;
			int len = 1;
			while(i + 1 < n && a[i + 1] > a[i]){
				len++;
				i++;
			}
			if(len == max){
				for(int j = start; j <= i; j++){
					printf("%d ", a[j]);
				}
				printf("\n");
			}
			i++;
		}
	}
	return 0;
}
