#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		double res = (double)1 / n;
		printf("%0.15lf\n", res);
	}
	return 0;
}
