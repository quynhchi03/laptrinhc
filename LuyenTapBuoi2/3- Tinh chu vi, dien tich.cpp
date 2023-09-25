#include <stdio.h>
#include <math.h>

float tinhDienTich(float chieuDai, float chieuRong) {
	return chieuDai * chieuRong;
}

float tinhChuVi(float chieuDai, float chieuRong) {
	return  (chieuDai + chieuRong) * 2;
}

int main() {
	float chieudai, chieurong;
	int n;

	printf("Nhap chieu dai cua hinh chu nhat : ");
	scanf("%f", &chieudai);

	printf("Nhap chieu rong cua hinh chu nhat : ");
	scanf("%f", &chieurong);

	float dienTich = (chieudai * chieurong);
	float chuVi = (chieudai + chieurong)*2;
	scanf("%d", &n);
	if (n == 1) {
		printf("\n Dien tich cua hinh chu nhat : %.2f\n", dienTich);
	}
	if (n == 2) {
		printf("\n Chu vi cua hinh chu nhat : %.2f\n", chuVi);
	}

	return 0;
}
