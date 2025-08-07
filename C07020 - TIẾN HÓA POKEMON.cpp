#include <stdio.h>
#include <string.h>

struct Pokemon {
	char ten[105];
	int k, m;
};

int main(){
	int n;
	scanf("%d", &n);
	struct Pokemon p[n + 1];
	int cnt = 0;
	int max = 0, mark = 0;
	for(int i = 1; i <= n; i++){
		scanf("%s", &p[i].ten);
		scanf("%d %d", &p[i].k, &p[i].m);
		int sum = 0;
		while(p[i].m >= p[i].k){
			sum += p[i].m / p[i].k;
			p[i].m = p[i].m % p[i].k + (p[i].m / p[i].k * 2);
		}
		cnt += sum;
		if(sum > max){
			max = sum;
			mark = i;
		}
	}
	printf("%d\n", cnt);
	printf("%s", p[mark].ten);
	return 0;
}
