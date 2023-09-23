// temp : luu thong tin tam thoi
#include <stdio.h>
#include <math.h>
int main() {
	int a, b;
	printf("\n Nhap gia tri cua a : ");
	scanf("%d" , &a);
	printf("\n Nhap gia tri cua b : ");
	scanf("%d" , &b);
	int temp = a;
	a = b;
	b = temp;
	printf("\n Ket qua sau hoan vi : a = %d, b = %d", a,b);

	return 0;
}


