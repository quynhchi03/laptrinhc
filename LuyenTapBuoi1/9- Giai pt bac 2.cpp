#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c,x,x1,x2,dt;

	printf("\n Nhap he so a : ");
	scanf("%f", &a);
	printf("\n Nhap he so b : ");
	scanf("%f", &b);
	printf("\n Nhap he so c : ");
	scanf("%f", &c);
	dt = (b*b) - (4*a*c);
	if (dt < 0) {
		printf("\n Phuong trinh vo nghiem");
	} else if (dt == 0) {
		printf("\n Phuong trinh co nghiem kep : %.2f", x = (-b)/2*a);
	} else if (dt > 0) {
		printf("\n Phuong trinh co 2 nghiem phan biet : %.2f", x1 = (-b+sqrt(dt)) / (2*a) , x2 = (-b-sqrt(dt)) / (2*a) );
	}
	return 0;
}

