#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int phantu[1000];
    printf("\n So luong phan tu trong mang : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
    	printf("\n Moi nhap phan tu : ");
        scanf("%d", &phantu[i]);
}
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (phantu[i] > phantu[j]) {
                
                int temp = phantu[i];
                phantu[i] = phantu[j];
                phantu[j] = temp;
}
}
}
    printf("\n Mang sap xep theo thu tu tang dan : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", phantu[i]);
}
    return 0;
}
