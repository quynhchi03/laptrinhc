#include <iostream>
#include <math.h>

using namespace std;

void phanTichSoNguyen(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n != 1) {
                cout << "x";
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout <<"Nhap vao so nguyen to:";
	cin >> n; 
    phanTichSoNguyen(n);
    return 0;
}
