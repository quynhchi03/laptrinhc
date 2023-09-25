#include <stdio.h>
#include <math.h>
#include <stdio.h>
// Ham giai pt bac 2
void Giaiphuongtrinhbac2(float a, float b, float c) {
// Tinh delta
    float delta = b * b - 4 * a * c;

// Kiem tra gia tri cua delta
    if (delta > 0) {
// Phuong trinh co 2 nghiem phan biet
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
          printf("\n Phuong trinh co hai nghiem phan biet : ");
          printf("\n x1 = %.2f", x1);
          printf("\n x2 = %.2f", x2);
    } else if (delta == 0) {
// Phuong trinh co nghiem kep
        float x = -b / (2 * a);
          printf("\n Phuong trinh co nghiem kep : ");
          printf("\n x = %.2f", x);
    } else {
// Phuong trinh khong co nghiem thuc
          printf("\n Phuong trinh khong co nghiem thuc!");
    }
}

int main() {
    float a, b, c;
    printf("\n Nhap he so a : ");
    scanf("%f", &a);
    printf("\n Nhap he so b : ");
    scanf("%f", &b);
    printf("\n Nhap he so c : ");
    scanf("%f", &c);

    Giaiphuongtrinhbac2(a, b, c);

    return 0;
}

