#include <stdio.h>
#include <math.h>
//Nhap mang tu ban phim
void nhapmang(int arr[], int n) {
	printf("\n Nhap so phan tu cho mang : ", n);
	for (int i = 0; i < n; i++) {
		printf("\n Nhap phan tu : ", i + 1);
		scanf("%d", &arr[i]);
	}
}

//Sap xep mang theo thu tu giam dan
void sapxepgiamdan(int arr[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
// Hoan doi gia tri cua 2 phan tu
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

//Xuat mang ra man hinh
void xuatmang(int arr[], int n) {
	printf("\n Mang sau khi sap xep giam dan : ");
	for (int i = 0; i < n; i++) {
		printf("\n %d ", arr[i]);
	}
}

int main() {
	int n;
	printf("\n Nhap so phan tu cua mang : ");
	scanf("%d", &n);

	int arr[n];

	nhapmang(arr, n);
	sapxepgiamdan(arr, n);
	xuatmang(arr, n);

	return 0;
}
