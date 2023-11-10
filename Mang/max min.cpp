#include <stdio.h>
#include<math.h>
int main() {
	int n;
	printf("\n Nhap kich thuoc cua mang: ");
	scanf("%d", &n);

	int a[n];

	printf("\n Nhap cac phan tu cua mang: ");
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	int max = a[0];
	int min = a[0];
	for (int i = 1; i < n; i++) {


		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("\n Gia tri lon nhat trong mang la: %d", max);
	printf("\n Gia tri nho nhat trong mang la: %d", min);

	return 0;
}







