#include <stdio.h>
#include <math.h>
int main() {
	int matran1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int matran2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
	int ketqua[3][3];
	int i, j, k;

// Khoi tao ma tran ket qua voi gia tri ban dau la 0
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			ketqua[i][j] = 0;
		}
	}
// Thuc hien phep nhan ma tran
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			for(k = 0; k < 3; k++) {
				ketqua[i][j] += matran1[i][k] * matran2[k][j];
			}
		}
// In ra ma tran ket qua
		printf("\n Ma tran ket qua : ");
		for(i = 0; i < 3; i++) {
			for(j = 0; j < 3; j++) {
				printf("\n %d ", ketqua[i][j]);
			}
			return 0;
		}
	}
}

