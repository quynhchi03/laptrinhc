// ans: cau lenh dem chu so
#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	int ans = 0;
	while (n != 0) {
		++ ans;
		n /= 10;
	}
	printf("%d", ans);
	return 0;
}
