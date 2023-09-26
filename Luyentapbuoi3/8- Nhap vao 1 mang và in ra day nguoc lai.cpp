#include <stdio.h>
#include <math.h>
int main() {
	int n;

	// Nhap so luong phantu trong mang
	printf("\n Nhap so luong phan tu trong mang : ");
	scanf("%d", &n);

	// Khai bao mang
	int mang[n];

	// Nhap cac phan tu cua mang
	printf("\n Nhap cac phan tu cua mang : ");
	for (int i = 0; i < n; i++) {
		printf("\n Phan tu %d: ", i + 1);
		scanf("%d", &mang[i]);
	}

	// In ra day nguoc lai
	printf("\n Day nguoc lai : ");
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", mang[i]);
	}

	return 0;
}
                                                                        
