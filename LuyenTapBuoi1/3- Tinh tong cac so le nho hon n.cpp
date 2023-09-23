#include <stdio.h>
#include <math.h>
int main() {
	float n,s;
	printf(" Moi nhap n :");
	scanf("%f", &n);
	for (int i = 1; i < n; i++) {
		if (i % 2 != 0) {
			s += i;
		}
	}
	printf(" Tong cac so le nho hon n : %.2f", s);
	return 0;
}

