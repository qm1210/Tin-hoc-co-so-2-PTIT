#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int mark = 0;
	if(a <= b){
		for(int i = 1; i <= a; i++){
			for(int k = i; k <= b; k++){
				printf("%d", k);
				if(k == b) mark = k - 1;
			}
			int cnt = 0;
			while(cnt < i - 1){
				printf("%d", mark);
				mark--;
				cnt++;
			}
			printf("\n");
		}
	}
	else{
		for(int i = 1; i <= a; i++){
			if(i <= b){
				for(int k = i; k <= b; k++){
					printf("%d", k);
					if(k == b) mark = k - 1;
				}
				int cnt = 0;
				while(cnt < i - 1){
					printf("%d", mark);
					mark--;
					cnt++;
				}
			}
			else{
				for(int k = i; k >= i - b + 1; k--){
					printf("%d", k);
				}
			}
			printf("\n");
		}
	}
	return 0;
}

