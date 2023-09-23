#include <stdio.h>
#include <math.h>
int main() {
	int n,dem;
	printf(" Moi nhap n : ");
	scanf("%d", &n);
	dem = 0;
	for (int i = 1; i<= n; i+= 1) {
		if (n % i == 0) {
			dem += 1;
		}
	}
	if (dem == 2) {
		printf("\n So vua nhap la so nguyen to") ;
	} else {
		printf("\n So vua nhap khong phai la so nguyen to");
	}

	return 0;
}
