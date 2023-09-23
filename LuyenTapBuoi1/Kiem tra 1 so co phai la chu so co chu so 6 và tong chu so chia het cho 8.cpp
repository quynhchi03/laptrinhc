// Kiem tra 1 so co phai la chu so co chu so 6 và tong chu so chia het cho 8
#include <stdio.h>
#include <math.h>
int check1(int n) {
	while(n) {
		if(n % 10 == 6) return 1;
		n /= 10;
}
	return 0;
}

int check2(int n) {
	int sum = 0;
	while(n) {
		sum += n % 10;
		n /= 10;
}
	return sum % 8 == 0;
}

int main() {
	for(int i = 1; i <= 1000; i++) {
		if(check1(i) && check2(i))
			printf("%d ", i);
}
	return 0;
}
