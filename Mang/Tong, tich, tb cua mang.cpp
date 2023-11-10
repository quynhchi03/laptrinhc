#include <stdio.h>
#include <math.h>
int main() {
	int n;

	printf("\n Nhap so phan tu cua mang: ");
	scanf("%d", &n);

	int a[n];
	printf("\n Nhap cac phan tu cua mang: ");
	for (int i = 0; i < n; i++) {


		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	int sum = 0;
	int tich = 1;

	for (int i = 0; i < n; i++) {
		sum += a[i];
		tich *= a[i];
	}

	float tb = (float)sum / n;

	printf("\n Tong cua mang la: %d", sum);


	printf("\n Tich cua mang la: %d", tich);
	printf("\n Gia tri trung binh cua mang la: %.2f", tb);



	return 0;
}
