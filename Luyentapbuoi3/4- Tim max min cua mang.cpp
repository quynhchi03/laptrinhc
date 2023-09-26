#include <stdio.h>
#include <math.h>
int main() {
    int phantu[] = { 1, 13, 45, 76, 12, 3, 98 };
    int n = sizeof(phantu) / sizeof(phantu[0]);

// Gia su phan tu dau tien la gia tri lon nhat va nho nhat ban dau
    int max = phantu[0];
    int min = phantu[0];

// Tim gia tri lon nhat va nho nhat trong mang
    for (int i = 1; i < n; i++) {
        if (phantu[i] > max) {
            max = phantu[i];
        }
        if (phantu[i] < min) {
            min = phantu[i];
        }
}

    printf("\n Gia tri lon nhat trong mang la : %d ", max);
    printf("\n Gia tri nho nhat trong mang la : %d ", min);

    return 0;
}







