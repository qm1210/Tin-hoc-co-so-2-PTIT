#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int cnt = 1;
		for(int i = 1; i < n; i++){
			int check = 1;
			for(int j = 0; j < i; j++){
				if(a[j] > a[i]){
					check = 0;
					break;
				}
			}
			if(check == 1) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

