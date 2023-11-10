#include<stdio.h>
#include<math.h>
int main() {
	int i, j, n,a[50],s=0;
	printf("\n Nhap vao so phan tu: ");
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++) {
		if(a[i]>0) {
			s=s+a[i];
		}
	}
	printf("\n Tong cac so duong trong day la: %d",s );

	for(i=0; i<n; i++) {
		if(a[i]<0) {
			for(j=i; j<n-1; j++) {
				a[j]=a[j+1];
			}
			n=n-1;
		}
	}
	printf("\n Day so sau khi xoa la : ");
	for(i=0; i<n; i++) {
		printf("%d", a[i]);
	}
	return 0;
}
