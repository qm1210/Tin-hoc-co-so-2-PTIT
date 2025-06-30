#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if(a == 0){
		printf("%0.2f", -c / b);
	}
	else{
		float delta = (b * b) - (4 * a * c);
		if(delta < 0) printf("NO");
		else if(delta == 0) printf("%0.2f", -b / (2 * a));
		else printf("%0.2f %0.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
	}
}
