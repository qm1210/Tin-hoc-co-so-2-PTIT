#include <stdio.h>
#include <math.h>

long long f[93] = {0};
void fibo(int n){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	fibo(n);
	int check = 0;
	for(int i = 0; i < 93; i++){
		if(f[i] == n){
			printf("1");
			check = 1;
			break;
		}
	}
	if(check == 0) printf("0");
	return 0;
}
