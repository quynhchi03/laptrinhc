#include <stdio.h>
#include <math.h>

int main() {
	float toan,van,dtb;
	char ho[10];
	char dem[20];
	char ten[10];
	// Viet tieu de ra man hinh
	printf("Chuong trinh tinh diem trung binh");
	printf("\n");
	// Lay du lieu ho ten
	printf("Moi nhap ho : ");
	scanf("%s",ho);
	printf("Moi nhap ten dem : ");
	scanf("%s",dem);
	printf("Moi nhap ten : ");
	scanf("%s",ten);
	//Doc diem
	printf("Moi nhap diem toan:");
	scanf("%f",&toan);
	//Doc diem
	printf("Moi nhap diem van:");
	scanf("%f",&van);

	dtb = (toan + van)/2;
	printf("Ho va ten hoc sinh: %s %s %s \n",ho,dem,ten);
	printf("Diem trung binh: %.2f",dtb);

	return 0;
}
