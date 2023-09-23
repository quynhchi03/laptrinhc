#include <stdio.h>
#include <math.h>
int main() {
	float a,b,x;

	printf("\n Nhap he so a : ");
	scanf("%d", &a);
	printf("\n Nhap he so b : ");
	scanf("%d", &b);
	x =(-b)/a;
	if ( a == 0 && b == 0) {
		printf("\n Phuong trinh vo so nghiem");
	} else if (a == 0 && b != 0) {
		printf("\n Phuong trinh vo nghiem");
	} else if ( a != 0 && b != 0) {
		printf("\n Phuong trinh co nghiem : %.2f", x);
	}

	return 0;
}


