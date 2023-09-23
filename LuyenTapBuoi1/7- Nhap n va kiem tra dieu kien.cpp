#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n <1) {
		printf(" n < 1");
	}
	else if ( n > 1 && n < 3) {
		printf(" Linh");
	}
	else if ( n > 4 && n < 6) {
		printf("Giang");
	}
	return 0;
}


