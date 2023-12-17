#include <iostream>
#include <math.h>

using namespace std;

int tinh(int n){
	int ti = 1;
	for(int i = 1; i <= n; i++){
		ti *= i;
	}
	return ti;
}
int main(){
	int a;
	int ti1;
	cout <<"Nhap vao cap cua tam giac: ";
	cin >> a;
	for(int n = 0; n < a; n++){
		for(int k = 0; k <= n; k++){
			ti1 = tinh(n)/ (tinh(k)*(tinh(n - k)));
			cout << ti1 <<" ";
		}
		cout <<"\n";
	}
	return 0;
}

