#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c,max;
		printf(" Moi nhap a: ");
		   scanf("%d", &a);
		printf(" Moi nhap b: ");
		   scanf("%d", &b);
		printf(" Moi nhap c: ");
		scanf("%d", &c);
		if (a > b and b > c) {
			max = a;
		} else if (a > c and c > b) {
			max = a;
		} else if (b > a and a > c) {
			max = b;
		} else if (b > c and c > a) {
			max = b;
		} else if (c > a and a > b) {
			max = c;
		} else {
			max = c;
		}
		printf("\n So lon nhat trong 3 so la : %d", max);
		return 0;
}


