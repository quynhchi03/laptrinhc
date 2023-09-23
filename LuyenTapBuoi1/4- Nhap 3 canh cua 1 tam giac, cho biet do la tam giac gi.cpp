#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c;
	printf( "Moi nhap a:");
	scanf("%f", &a);
	printf( "Moi nhap b:");
	scanf("%f", &b);
	printf( "Moi nhap c:");
	scanf("%f", &c);
	if (a + b > c and b + c > a and a + c > b) {
		printf( "Ba so vua nhap tao thanh tam giac");
		if (a==b and b == c) {
			printf("\n Tao thanh tam giac deu");
		} else if ((a == b) or (b == c) or (c == a)) {
			printf( "\n Tao thanh tam giac can");
		} else if((a*a + b*b == c*c) or (b*b + c*c == a*a) or (a*a + c*c == b*b)) {
			printf("\n Tao thanh tam giac vuong");
		} else {
			printf( "Tao thanh tam giac thuong");
		}
	} else {
		printf( "Ba so vua nhap khong tao thanh tam giac " );
	}
	return 0;
}

