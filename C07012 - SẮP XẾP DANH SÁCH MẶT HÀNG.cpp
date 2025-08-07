#include <stdio.h>
#include <string.h>

struct MatHang {
	int ma;
	char ten[105];
	char nhom[105];
	double mua, ban, loi;
};

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	struct MatHang mh[n + 1];
	for(int i = 1 ; i <= n; i++){
		mh[i].ma = i;
		gets(mh[i].ten);
		gets(mh[i].nhom);
		scanf("%lf", &mh[i].mua);
		scanf("%lf", &mh[i].ban);
		getchar();
		mh[i].loi = mh[i].ban - mh[i].mua;
	}
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(mh[i].loi < mh[j].loi){
				struct MatHang tmp = mh[i];
				mh[i] = mh[j];
				mh[j] = tmp;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		printf("%d %s %s %.2lf\n", mh[i].ma, mh[i].ten, mh[i].nhom, mh[i].loi);
	}
	return 0;
}
