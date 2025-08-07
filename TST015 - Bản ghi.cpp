#include <stdio.h>
#include <math.h>

struct Triangle{
	float a, b, c;
	float p;
	float s;
};

int main(){
	int n;
	scanf("%d", &n);
	struct Triangle f[n];
	for(int i = 0; i < n; i++){
		scanf("%f%f%f", &f[i].a, &f[i].b, &f[i].c);
		f[i].p = (f[i].a + f[i].b + f[i].c) * 0.5;
		f[i].s = sqrt(f[i].p * (f[i].p - f[i].a) * (f[i].p - f[i].b) * (f[i].p - f[i].c));
	}
	for(int i = 0; i < n; i++){
		for(int j = n - 1; j > i; j--){
			if(f[i].s > f[j].s){
				struct Triangle tmp = f[i];
				f[i] = f[j];
				f[j] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%1.f %1.f %1.f\n", f[i].a, f[i].b, f[i].c);
	}
}
