#include <stdio.h>
#include <math.h>
// Kiem tra 1 so nguyen duong có phai la so chinh phuong k
int chinhphuong(int n) {
	int can = sqrt(n);
	if(can * can == n)
		return 1; // n la so chinh phuong
	else return 0; // n k phai so chinh phuong
}

int main() {
	int n = 16;
	if(chinhphuong(n) == 1) printf("Yes\n");
	else printf("No\n");
	return 0;
}
