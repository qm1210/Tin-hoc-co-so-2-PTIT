#include <stdio.h>
#include <string.h>

struct Khach{
	int t, d;
};

int main(){
	int n;
	scanf("%d", &n);
	struct Khach a[n];
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a[i].t, &a[i].d);
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i].t > a[j].t || (a[i].t == a[j].t && a[i].d > a[j].d)){
				struct Khach tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	int time = 0;
	for(int i = 0; i < n; i++){
		if(a[i].t > time) time = a[i].t;
		time += a[i].d;
	}
	printf("%d", time);
	return 0;
}
