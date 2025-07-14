#include <stdio.h>
#include <math.h>

int check(int n){
	int sum = 0;
	int total = 0;
	int tmp = n;
	while(tmp != 0){
		sum += tmp % 10;
		tmp /= 10;
	}
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			tmp = i;
			while(tmp != 0){
				total += tmp % 10;
				tmp /= 10;
			}
			n /= i;
		}
	}
	if(n != 1){
		while(n != 0){
			total += n % 10;
			n /= 10;
		}
	}
	if(sum != total) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	if(check(n)) printf("YES");
	else printf("NO");
	return 0;
}

