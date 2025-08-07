#include <stdio.h>
#include <string.h>

struct ThiSinh{
	int id;
	char name[105];
	char date[20];
	float d1, d2, d3, tong;
};

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	struct ThiSinh ts[n + 1];
	float max = 0;
	for(int i = 1; i <= n; i++){
		ts[i].id = i;
		gets(ts[i].name);
		gets(ts[i].date);
		scanf("%f", &ts[i].d1);
		scanf("%f", &ts[i].d2);
		scanf("%f", &ts[i].d3);
		getchar();
		ts[i].tong = ts[i].d1 + ts[i].d2 + ts[i].d3;
		if(ts[i].tong > max) max = ts[i].tong;
	}
	for(int i = 1; i < n; i++){
		for(int j = i + 1; j <= n; j++){
			if(ts[i].tong < ts[j].tong || ts[i].id > ts[j].id){
				struct ThiSinh tmp = ts[i];
				ts[i] = ts[j];
				ts[j] = tmp;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		if(ts[i].tong == max) printf("%d %s %s %.1f\n", ts[i].id, ts[i].name, ts[i].date, ts[i].tong);
	}
	return 0;
}
